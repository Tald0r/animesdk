#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_134;
class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0xCD1B280)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCD1AC30)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCD1A5F0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0D0B73CF9BBE71CA_OFFSET UNITYSDK_OFFSET(0xCD1B320)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xCD1A240)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xCD1A010)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xCD1BFE0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4D2A59653585D995_OFFSET UNITYSDK_OFFSET(0xCD1C050)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xCD1A670)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0xCD1B0D0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0xCD1AC90)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xCD1A000)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCD1A110)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_BC88F51C97F20F69_OFFSET UNITYSDK_OFFSET(0xCD1C200)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xCD1C360)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD1BFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FollowAvatarTrait_TypeDefinitionIndex = 60500;

	class FollowAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SummonRobotID; // 0x10
		::System::Int32 AI_ID; // 0x14
		::MoleMole::Config::CampType Camp; // 0x18
		::System::Boolean AdaptWorldLevel; // 0x1C
		::Class_1_5FA9CCDDD9957726* _config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_771E8E0EDDBEBF2B(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET))(this, a1);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_9144040ECD391705_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_4D2A59653585D995(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4D2A59653585D995_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_BC88F51C97F20F69(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_BC88F51C97F20F69_OFFSET))(a1);
		}

		::MoleMole::EntityHandle Method_2_0D0B73CF9BBE71CA(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0D0B73CF9BBE71CA_OFFSET))(this, a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_134* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}
	};
}
