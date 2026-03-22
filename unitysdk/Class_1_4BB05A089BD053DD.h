#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1B8C1C279B44F3E7;
class Class_1_877AA22B04AFB81F_1;
class Class_1_ED81D7B77E420A69_1;
class Class_1_EEA0111A28582B57;
class Class_2_79AE422BA06F6D26_100;
class MonoUITableScrollV2;
namespace MoleMole { class MonoUIScrollViewCarousel; }
namespace MoleMole { class UIMainCityMenuPageController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_4BB05A089BD053DD_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xBA92E00)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xBA921D0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_1_OFFSET UNITYSDK_OFFSET(0xBA92CF0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0xBA92560)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBA92640)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xBA92F80)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0xBA930C0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0xBA92C80)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_4A76FFCC8CA07586_OFFSET UNITYSDK_OFFSET(0xBA922A0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0xBA920F0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xBA926B0)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_80B56865F2E428AE_OFFSET UNITYSDK_OFFSET(0xBA93040)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_AA08720895458700_OFFSET UNITYSDK_OFFSET(0xBA92C10)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_B9AE1C452C6EBDC5_OFFSET UNITYSDK_OFFSET(0xBA93580)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0xBA92D50)
#define CLASS_1_4BB05A089BD053DD_METHOD_1_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0xBA925C0)
#define CLASS_1_4BB05A089BD053DD__CTOR_OFFSET UNITYSDK_OFFSET(0xBA92050)

inline static constexpr unsigned int Class_1_4BB05A089BD053DD_TypeDefinitionIndex = 49633;

class Class_1_4BB05A089BD053DD : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3; // 0x0
	::MoleMole::UIMainCityMenuPageController* Field_1_1; // 0x10
	::MonoUITableScrollV2* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_877AA22B04AFB81F_1*>* Field_1_8; // 0x20
	::Class_2_79AE422BA06F6D26_100* Field_1_2; // 0x28
	::Class_1_ED81D7B77E420A69_1* Field_1_5; // 0x30
	::MoleMole::MonoUIScrollViewCarousel* Field_1_3; // 0x38
	::System::Int32 Field_1_7; // 0x40
	::System::Boolean Field_1_9; // 0x44
	::System::Boolean Field_1_6; // 0x45
	::System::Boolean Field_1_11; // 0x46
	::Foundation::Coroutine::CoroutineHandle Field_1_10; // 0x48
	::System::Single Field_1_12; // 0x4C

	::System::Void _ctor(::MoleMole::UIMainCityMenuPageController* a1, ::Class_1_EEA0111A28582B57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityMenuPageController*, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B176AC622BC2444(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_5B176AC622BC2444_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_4A76FFCC8CA07586(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_4A76FFCC8CA07586_OFFSET))(this, a1);
	}

	::Class_1_877AA22B04AFB81F_1* Method_1_16E792B668863BDD(::Class_1_1B8C1C279B44F3E7* a1)
	{
		return ((::Class_1_877AA22B04AFB81F_1*(*)(::PVOID, ::Class_1_1B8C1C279B44F3E7*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1513374C600EBEC(::Class_1_877AA22B04AFB81F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_877AA22B04AFB81F_1*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_1_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::Class_1_877AA22B04AFB81F_1* Method_1_16E792B668863BDD_1(::Class_1_1B8C1C279B44F3E7* a1)
	{
		return ((::Class_1_877AA22B04AFB81F_1*(*)(::PVOID, ::Class_1_1B8C1C279B44F3E7*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_16E792B668863BDD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_80B56865F2E428AE(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_80B56865F2E428AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_1_B9AE1C452C6EBDC5(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4BB05A089BD053DD_METHOD_1_B9AE1C452C6EBDC5_OFFSET))(this, a1);
	}
};
