#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }

#define CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x9246AA0)
#define CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4_METHOD_1_8580AF855E6910BD_OFFSET UNITYSDK_OFFSET(0x9246B90)
#define CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4__CTOR_OFFSET UNITYSDK_OFFSET(0x9246A90)

inline static constexpr unsigned int Class_3_A8AD4ABAE49686E5_Class_1_659EC4CA22011AD4_TypeDefinitionIndex = 40110;

class Class_3_A8AD4ABAE49686E5_Class_1_659EC4CA22011AD4 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_8580AF855E6910BD(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + CLASS_3_A8AD4ABAE49686E5_CLASS_1_659EC4CA22011AD4_METHOD_1_8580AF855E6910BD_OFFSET))(this, a1);
	}
};
