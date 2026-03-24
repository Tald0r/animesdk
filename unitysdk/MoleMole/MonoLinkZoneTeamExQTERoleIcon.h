#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4AE0715386866DD6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_C2ED712377151494.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0xA3B7670)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_4DCD37C80A334E65_OFFSET UNITYSDK_OFFSET(0xA3B7080)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_81C4A35D08FA7123_OFFSET UNITYSDK_OFFSET(0xA3B6BE0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_A7FE2EDDA258EA3F_OFFSET UNITYSDK_OFFSET(0xA3B7740)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xA3B6810)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xA3B7870)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA3B63B0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA3B6520)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA3B62F0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B67D0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B6750)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex = 71303;

	class MonoLinkZoneTeamExQTERoleIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex)->GetStaticField(0xF430);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* RoleIconPsRenders; // 0x18
		::Enum_3_4AE0715386866DD6 TeamExQTEType; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* Field_5_2; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_AA7E3074254D484A_OFFSET))(this);
		}

		::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo* Method_5_4DCD37C80A334E65(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_4DCD37C80A334E65_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_1B9BAFE25893B138()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_1B9BAFE25893B138_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_A7FE2EDDA258EA3F(::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_A7FE2EDDA258EA3F_OFFSET))(this, a1);
		}

		::System::Void Method_5_81C4A35D08FA7123(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_81C4A35D08FA7123_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}
