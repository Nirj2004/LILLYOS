#pragma once

#include "UserInterface/Components/MainPanel/DateTime.h"
#include "UserInterface/Components/MainPanel/Calendar.h"
#include "UserInterface/Components/MainPanel/StopWatch.h"
#include "UserInterface/Components/MainComponent.h"
#include "System/AppsStatusMonitor.h"

class MainPanel {

	public:

		MainPanel();

		void render();
		void switchApp(int vector);
		void handleSwipeVertical(int8_t vector);
		void handlePEKShort();
		bool isSleepForbidden();
		MainComponent *getCurrentComponent();

	protected:

		const int8_t APPS = 2;

		MainComponent *apps[3];
		int8_t currentApp = 0;

		void clear();

		void createApps() {
			DateTime *dt = new DateTime();
			AppsStatusMonitor::getInstance()->registerDateTimeComponent(dt);
			this->apps[0] = dt;
			this->apps[1] = new Calendar();
			this->apps[2] = new StopWatch();
		}

};
