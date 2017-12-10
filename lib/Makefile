DIRS = lib jjlib jwlib jylib app

all:
	@for d in $(DIRS);\
	do\
		$(MAKE) -C $$d;\
	done

clean:
	@for d in $(DIRS);\
	do\
		$(MAKE) -C  $$d clean;\
	done
