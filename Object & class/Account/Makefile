all.out: account.cpp test_account.cpp
	g++ $^ -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out

clean:
	rm *.out