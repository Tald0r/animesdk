#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachments; }
namespace System { class Action; }

#define CLASS_1_FB22D25462F39CFC_CLASS_1_CC09371A224F9DD1_METHOD_1_889AAF0699FE766E_OFFSET UNITYSDK_OFFSET(0xACADF80)
#define CLASS_1_FB22D25462F39CFC_CLASS_1_CC09371A224F9DD1__CTOR_OFFSET UNITYSDK_OFFSET(0xACADF70)

inline static constexpr unsigned int Class_1_FB22D25462F39CFC_Class_1_CC09371A224F9DD1_TypeDefinitionIndex = 48524;

class Class_1_FB22D25462F39CFC_Class_1_CC09371A224F9DD1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_CC09371A224F9DD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_889AAF0699FE766E(::MoleMole::Config::ConfigAttachments* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachments*))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_CC09371A224F9DD1_METHOD_1_889AAF0699FE766E_OFFSET))(this, a1);
	}
};
