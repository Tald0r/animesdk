#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_4D5E634299582EA8_Class_1_0D917C9760BF007D;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_260FA82F880DE40F_METHOD_1_70C53C44D861ADA9_OFFSET UNITYSDK_OFFSET(0x7157A80)
#define CLASS_2_4D5E634299582EA8_CLASS_1_260FA82F880DE40F__CTOR_OFFSET UNITYSDK_OFFSET(0x7157A70)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_260FA82F880DE40F_TypeDefinitionIndex = 71707;

class Class_2_4D5E634299582EA8_Class_1_260FA82F880DE40F : public ::System::Object
{
public:
	::Class_2_4D5E634299582EA8_Class_1_0D917C9760BF007D* Field_1_0; // 0x10
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_260FA82F880DE40F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_70C53C44D861ADA9(::Foundation::AssetPath a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_260FA82F880DE40F_METHOD_1_70C53C44D861ADA9_OFFSET))(this, a1, a2, a3);
	}
};
