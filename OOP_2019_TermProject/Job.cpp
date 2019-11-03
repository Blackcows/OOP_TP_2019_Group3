#include <iostream>

class Player {
private:
	char* nickname;
public:
	// 생성자 -> 닉네임 변경
	Player(char* name) {
		this->nickname = name;
	}

	// 직업별 능력 (완전 추상 메소드, 재정의 필요)
	virtual void ability() = 0;

	void vote() {
		// 투표해서 서버에 득표수를 저장, 최다 득표자 선택 (동률 -> 처형 안하고 패스)
	}
};

class Mafia:Player{
public:
	void ability() override{
		// 플레이어 1명을 선택해서 처형, 단 의사가 그를 지정하면 처형 불가
	}
};

class Police:Player {
public:
	void ability() override {
		// 플레이어 1명을 선택해서 플레이어의 직업을 출력
	}
};

class Doctor :Player {
public:
	void ability() override {
		// 플레이어 1명을 선택하여 그 플레이어가 죽지 않도록 보호
	}
};

class CItizen:Player {
public:
	void ability() override {
		// 뭐 필요한가...??
	}
};