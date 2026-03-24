#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }

#define CLASS_1_892C8E99BD4BE910_CLASS_1_55575100A9C041FF_METHOD_1_4C1188AC879CFF93_OFFSET UNITYSDK_OFFSET(0x6722240)
#define CLASS_1_892C8E99BD4BE910_CLASS_1_55575100A9C041FF__CTOR_OFFSET UNITYSDK_OFFSET(0x6722230)

inline static constexpr unsigned int Class_1_892C8E99BD4BE910_Class_1_55575100A9C041FF_TypeDefinitionIndex = 38294;

class Class_1_892C8E99BD4BE910_Class_1_55575100A9C041FF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_55575100A9C041FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C1188AC879CFF93(::MoleMole::DitherConfigSeparate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DitherConfigSeparate*))((::PBYTE)hIl2Cpp + CLASS_1_892C8E99BD4BE910_CLASS_1_55575100A9C041FF_METHOD_1_4C1188AC879CFF93_OFFSET))(this, a1);
	}
};
