#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0;
namespace MoleMole::Config { class ConfigHitDatas; }

#define CLASS_1_82D825AD3611631A_CLASS_1_E9D0BFC552B796DE_METHOD_1_A9AD187B110F01E5_OFFSET UNITYSDK_OFFSET(0x7E054E0)
#define CLASS_1_82D825AD3611631A_CLASS_1_E9D0BFC552B796DE__CTOR_OFFSET UNITYSDK_OFFSET(0x7E054D0)

inline static constexpr unsigned int Class_1_82D825AD3611631A_Class_1_E9D0BFC552B796DE_TypeDefinitionIndex = 42163;

class Class_1_82D825AD3611631A_Class_1_E9D0BFC552B796DE : public ::System::Object
{
public:
	::Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_CLASS_1_E9D0BFC552B796DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A9AD187B110F01E5(::MoleMole::Config::ConfigHitDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitDatas*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_CLASS_1_E9D0BFC552B796DE_METHOD_1_A9AD187B110F01E5_OFFSET))(this, a1);
	}
};
