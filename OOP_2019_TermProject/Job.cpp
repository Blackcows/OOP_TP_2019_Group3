#include <iostream>

class Player {
private:
	char* nickname;
public:
	// ������ -> �г��� ����
	Player(char* name) {
		this->nickname = name;
	}

	// ������ �ɷ� (���� �߻� �޼ҵ�, ������ �ʿ�)
	virtual void ability() = 0;

	void vote() {
		// ��ǥ�ؼ� ������ ��ǥ���� ����, �ִ� ��ǥ�� ���� (���� -> ó�� ���ϰ� �н�)
	}
};

class Mafia:Player{
public:
	void ability() override{
		// �÷��̾� 1���� �����ؼ� ó��, �� �ǻ簡 �׸� �����ϸ� ó�� �Ұ�
	}
};

class Police:Player {
public:
	void ability() override {
		// �÷��̾� 1���� �����ؼ� �÷��̾��� ������ ���
	}
};

class Doctor :Player {
public:
	void ability() override {
		// �÷��̾� 1���� �����Ͽ� �� �÷��̾ ���� �ʵ��� ��ȣ
	}
};

class CItizen:Player {
public:
	void ability() override {
		// �� �ʿ��Ѱ�...??
	}
};