#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_083E3C7B49B5A12D;
namespace MoleMole { class MultipleVideoPlayerManager; }

#define CLASS_3_083E3C7B49B5A12D_CLASS_1_692DE17C6D286628_METHOD_1_425AFF51FB23C131_OFFSET UNITYSDK_OFFSET(0xA5A93C0)
#define CLASS_3_083E3C7B49B5A12D_CLASS_1_692DE17C6D286628__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A93B0)

inline static constexpr unsigned int Class_3_083E3C7B49B5A12D_Class_1_692DE17C6D286628_TypeDefinitionIndex = 61313;

class Class_3_083E3C7B49B5A12D_Class_1_692DE17C6D286628 : public ::System::Object
{
public:
	::Class_3_083E3C7B49B5A12D* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083E3C7B49B5A12D_CLASS_1_692DE17C6D286628__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_425AFF51FB23C131(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_3_083E3C7B49B5A12D_CLASS_1_692DE17C6D286628_METHOD_1_425AFF51FB23C131_OFFSET))(this, a1);
	}
};
