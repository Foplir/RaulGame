import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferStrategy;
import java.io.Serial;

public class Game extends Canvas implements Runnable{
    @Serial
    private static final long serialVersionUID = 1L;
    boolean running;
    public static int WIDTH = 400; //ширина
    public static int HEIGHT = 300; //высота
    public static String NAME = "RaulGame"; //заголовок окна

    public void run(){
        long lastTime = System.currentTimeMillis();
        long delta;

        init();

        while(running) {
            delta = System.currentTimeMillis() - lastTime;
            lastTime = System.currentTimeMillis();
            update(delta);

        }
    }

    private void update(long delta) {
    }

    public static void init(){

    }

    public void render(){
        BufferStrategy bs = getBufferStrategy();
        if (bs == null){
            createBufferStrategy(2);
            requestFocus();
            return;
        }

        Graphics g = bs.getDrawGraphics();
        g.setColor(Color.BLACK);
        g.fillRect(0, 0, getWidth(), getHeight());
        g.dispose();
        bs.show();
    }


    public static void main(String[] args){
        Game game = new Game();
        game.setPreferredSize(new Dimension(WIDTH, HEIGHT));

        JFrame frame = new JFrame(Game.NAME);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());
        frame.add(game, BorderLayout.CENTER);
        frame.pack();
        frame.setResizable(false);
        frame.setVisible(true);

        game.start();
    }

    public void start(){
        running = true;
        new Thread(this).start();
    }
}
