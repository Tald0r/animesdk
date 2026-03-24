#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_750DA0E74FE20AAE_CLASS_1_CACE3978C6EC5D12_METHOD_1_04E231EAE97ECCEA_OFFSET UNITYSDK_OFFSET(0x7256A70)
#define CLASS_3_750DA0E74FE20AAE_CLASS_1_CACE3978C6EC5D12__CTOR_OFFSET UNITYSDK_OFFSET(0x7256A60)

inline static constexpr unsigned int Class_3_750DA0E74FE20AAE_Class_1_CACE3978C6EC5D12_TypeDefinitionIndex = 78766;

class Class_3_750DA0E74FE20AAE_Class_1_CACE3978C6EC5D12 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_CLASS_1_CACE3978C6EC5D12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04E231EAE97ECCEA(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + CLASS_3_750DA0E74FE20AAE_CLASS_1_CACE3978C6EC5D12_METHOD_1_04E231EAE97ECCEA_OFFSET))(this, a1);
	}
};
