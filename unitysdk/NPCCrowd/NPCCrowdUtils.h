#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4D2BC204E8C5F006;
class Class_3_9AE843FF905C0BDB;
class Class_3_F2DAD7F45F518868;

#define NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x64248C0)
#define NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET UNITYSDK_OFFSET(0x6424B20)
#define NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x6424660)
#define NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x6424D80)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_TypeDefinitionIndex = 49846;

	class NPCCrowdUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_ID = 0x0; // 0x0

		static ::System::Boolean GetTagComponent(::System::UInt32 entityID, ::Class_3_4D2BC204E8C5F006*& tagComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_4D2BC204E8C5F006*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETTAGCOMPONENT_OFFSET))(entityID, tagComponent);
		}

		static ::System::Boolean GetCrowdComponent(::System::UInt32 entityID, ::Class_3_F2DAD7F45F518868*& crowdComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETCROWDCOMPONENT_OFFSET))(entityID, crowdComponent);
		}

		static ::System::Boolean GetMaterialComponent(::System::UInt32 entityID, ::Class_3_9AE843FF905C0BDB*& matComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_9AE843FF905C0BDB*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_GETMATERIALCOMPONENT_OFFSET))(entityID, matComponent);
		}

		static ::System::Boolean IsCrowdStreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDUTILS_ISCROWDSTREAMINGENABLE_OFFSET))();
		}
	};
}
