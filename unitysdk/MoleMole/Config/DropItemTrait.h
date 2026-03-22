#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0xF1706C0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF170170)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF16FDB0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xF16F8B0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1F818C1EE6F8D607_OFFSET UNITYSDK_OFFSET(0xF170CA0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xF170C30)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0xF16FAE0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0xF1701D0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xF16FE30)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0xF170500)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xF16F8A0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xF16F9B0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xF170FB0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_E158CBF1CB4B8B5B_OFFSET UNITYSDK_OFFSET(0xF170E50)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xF170C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DropItemTrait_TypeDefinitionIndex = 63486;

	class DropItemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ItemID; // 0x10
		::System::Int32 OverridePickType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::DropItemTrait* Method_2_1F818C1EE6F8D607(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_1F818C1EE6F8D607_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_46F5479027C46F32_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::DropItemTrait* Method_2_E158CBF1CB4B8B5B(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_E158CBF1CB4B8B5B_OFFSET))(a1);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}
	};
}
