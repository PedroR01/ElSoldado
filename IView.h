#pragma once
#ifndef IVIEW_H
#define IVIEW_H
#include <string>

class IView
{
public:
	virtual ~IView() = default;
	virtual void mostrarTexto(const std::string& texto) = 0;
};

#endif // !IVIEW_H
