#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace System { class Action; }

#define CLASS_1_BBF361A22E4AF131_CLASS_1_8F8636D5E0CC14AF_METHOD_1_3A3C0425D9CAC2AF_OFFSET UNITYSDK_OFFSET(0x8BCD340)
#define CLASS_1_BBF361A22E4AF131_CLASS_1_8F8636D5E0CC14AF__CTOR_OFFSET UNITYSDK_OFFSET(0x8BCD330)

inline static constexpr unsigned int Class_1_BBF361A22E4AF131_Class_1_8F8636D5E0CC14AF_TypeDefinitionIndex = 43911;

class Class_1_BBF361A22E4AF131_Class_1_8F8636D5E0CC14AF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_8F8636D5E0CC14AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A3C0425D9CAC2AF(::MoleMole::Config::ConfigHollowChessboardInteract* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardInteract*))((::PBYTE)hIl2Cpp + CLASS_1_BBF361A22E4AF131_CLASS_1_8F8636D5E0CC14AF_METHOD_1_3A3C0425D9CAC2AF_OFFSET))(this, a1);
	}
};
