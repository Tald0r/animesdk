#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }

#define CLASS_1_909C41311A9C5D42_CLASS_1_ADF69962E3AC58B9_METHOD_1_C6C69FEEE8C071CD_OFFSET UNITYSDK_OFFSET(0xB87FD70)
#define CLASS_1_909C41311A9C5D42_CLASS_1_ADF69962E3AC58B9__CTOR_OFFSET UNITYSDK_OFFSET(0xB87FD60)

inline static constexpr unsigned int Class_1_909C41311A9C5D42_Class_1_ADF69962E3AC58B9_TypeDefinitionIndex = 54166;

class Class_1_909C41311A9C5D42_Class_1_ADF69962E3AC58B9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_CLASS_1_ADF69962E3AC58B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6C69FEEE8C071CD(::MoleMole::Config::TagLibraryConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + CLASS_1_909C41311A9C5D42_CLASS_1_ADF69962E3AC58B9_METHOD_1_C6C69FEEE8C071CD_OFFSET))(this, a1);
	}
};
