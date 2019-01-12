#include "GenericApplication.h"

GenericApplication::GenericApplication()
	: m_MessageHandler(nullptr)
{

}

GenericApplication::~GenericApplication()
{

}

void GenericApplication::PumpMessages(const float timeDelta)
{
	
}

void GenericApplication::Tick(const float timeDelta)
{

}

std::shared_ptr<GenericWindow> GenericApplication::MakeWindow(int32 width, int32 height, const char* title)
{
	return nullptr;
}

std::shared_ptr<GenericWindow> GenericApplication::GetWindow()
{
	return nullptr;
}

void GenericApplication::Destroy()
{

}

void GenericApplication::InitializeWindow(const std::shared_ptr<GenericWindow>& window, const std::shared_ptr<GenericWindow>& parent, const bool showImmediately)
{

}

void GenericApplication::SetMessageHandler(const std::shared_ptr<GenericApplicationMessageHandler>& messageHandler)
{
	m_MessageHandler = messageHandler;
}