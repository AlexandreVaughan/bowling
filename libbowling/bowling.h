
bool bowling();

class Game
{
public:
    bool roll(int pins){

        if (pins == 10)
        {
            m_score = 2* pins;
            return true;
        }
        m_score += pins;
        return m_score <= 10;
     }

    int score() const {return m_score;}

private:
    int m_score = 0;
};