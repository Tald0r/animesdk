#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_909FADC0CC5C7D1F.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/GroupTrack.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0xC333950)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0xC3338F0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0xC333C60)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC333C50)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0xC333B20)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xC333AF0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetGroupTrack_TypeDefinitionIndex = 44674;

	class ZNetGroupTrack : public ::UnityEngine::Timeline::GroupTrack
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_909FADC0CC5C7D1F, ::UnityEngine::Color>** StaticGet_s_GroupTypeToTrackColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_909FADC0CC5C7D1F, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x41B00);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0xFCF0);
		}
		::Enum_3_909FADC0CC5C7D1F groupTrackType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET))();
		}

		::System::Boolean HasCustomColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET))(this);
		}

		::UnityEngine::Color GetCustomColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Color Method_6_BFD792E814D995C0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_METHOD_6_BFD792E814D995C0_OFFSET))(this);
		}
	};
}
