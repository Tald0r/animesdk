#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0xE373D90)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE373700)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE3730E0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0D0B73CF9BBE71CA_OFFSET UNITYSDK_OFFSET(0xE373E30)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xE372D30)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xE372B00)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0xE374F70)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2E626C11CDAF4187_OFFSET UNITYSDK_OFFSET(0xE373760)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4D2A59653585D995_OFFSET UNITYSDK_OFFSET(0xE374DC0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_771E8E0EDDBEBF2B_OFFSET UNITYSDK_OFFSET(0xE373BE0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xE373160)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xE372AF0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xE372C00)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_BC88F51C97F20F69_OFFSET UNITYSDK_OFFSET(0xE374BF0)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xE374D50)
#define MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE374BE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FollowAvatarTrait_TypeDefinitionIndex = 55491;

	class FollowAvatarTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SummonRobotID; // 0x18
		::System::Int32 AI_ID; // 0x1C
		::MoleMole::Config::CampType Camp; // 0x20
		::System::Boolean AdaptWorldLevel; // 0x24
		::Class_1_5FA9CCDDD9957726* _config; // 0x28

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

		::System::Void Method_2_1454625925CA73F5(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_1454625925CA73F5_OFFSET))(this, a1);
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

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_BC88F51C97F20F69(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_BC88F51C97F20F69_OFFSET))(a1);
		}

		::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::FollowAvatarTrait* Method_2_4D2A59653585D995(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::FollowAvatarTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_4D2A59653585D995_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2E626C11CDAF4187(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2E626C11CDAF4187_OFFSET))(this, a1, a2);
		}

		::MoleMole::EntityHandle Method_2_0D0B73CF9BBE71CA(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_0D0B73CF9BBE71CA_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOLLOWAVATARTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}
	};
}
