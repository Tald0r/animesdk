#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoEffectPluginScreenEffect; }

#define CLASS_3_C97E18A23048EBB7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6D279F0)
#define CLASS_3_C97E18A23048EBB7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6D27B80)
#define CLASS_3_C97E18A23048EBB7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6D27AE0)
#define CLASS_3_C97E18A23048EBB7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6D27980)
#define CLASS_3_C97E18A23048EBB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D27A50)
#define CLASS_3_C97E18A23048EBB7__CTOR_OFFSET UNITYSDK_OFFSET(0x6D27AD0)

inline static constexpr unsigned int Class_3_C97E18A23048EBB7_TypeDefinitionIndex = 44713;

class Class_3_C97E18A23048EBB7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x69; // 0x0
	::MoleMole::MonoEffectPluginScreenEffect* Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x50
	::System::Boolean Field_3_2; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_C97E18A23048EBB7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_C97E18A23048EBB7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C97E18A23048EBB7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
