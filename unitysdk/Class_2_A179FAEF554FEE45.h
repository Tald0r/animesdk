#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8D2204756685FA3A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

class Class_0_16E4307DCC419505_100;
class Class_1_434D96DFAAFA5488;
class Class_2_777A5D016ADC7368;
class Class_2_AB9601BC4707463D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A179FAEF554FEE45_METHOD_2_24981F8F00B30705_OFFSET UNITYSDK_OFFSET(0x7BB93F0)
#define CLASS_2_A179FAEF554FEE45_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x7BB9200)
#define CLASS_2_A179FAEF554FEE45_METHOD_2_5F6B6215290C17D3_OFFSET UNITYSDK_OFFSET(0x7BB84A0)
#define CLASS_2_A179FAEF554FEE45_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x7BB9400)
#define CLASS_2_A179FAEF554FEE45_METHOD_2_9F459089AD62C6AA_OFFSET UNITYSDK_OFFSET(0x7BB9470)
#define CLASS_2_A179FAEF554FEE45_METHOD_2_F29D407ED9229B14_OFFSET UNITYSDK_OFFSET(0x7BB95C0)
#define CLASS_2_A179FAEF554FEE45__CTOR_OFFSET UNITYSDK_OFFSET(0x7BB8130)

inline static constexpr unsigned int Class_2_A179FAEF554FEE45_TypeDefinitionIndex = 73000;

class Class_2_A179FAEF554FEE45 : public ::Class_1_8D2204756685FA3A
{
public:
	::MoleMole::EntityHandle Field_2_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle>* Field_2_0; // 0x60
	::Class_1_434D96DFAAFA5488* Field_2_2; // 0x68

	::System::Void _ctor(::Class_0_16E4307DCC419505_100* a1, ::Class_2_777A5D016ADC7368* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_100*, ::Class_2_777A5D016ADC7368*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5F6B6215290C17D3(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_5F6B6215290C17D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_24981F8F00B30705(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_24981F8F00B30705_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_9F459089AD62C6AA(::MoleMole::UI::FlowerShop::ESlotType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_9F459089AD62C6AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F29D407ED9229B14(::MoleMole::UI::FlowerShop::EFinishJudge a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + CLASS_2_A179FAEF554FEE45_METHOD_2_F29D407ED9229B14_OFFSET))(this, a1);
	}
};
