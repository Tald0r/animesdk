#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TVGroupTextureSheetBehaviour_Enum_3_1B0311C3DF450371.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_A02EEEDBDD11A4F9;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_02952E97FE631CE3_1_OFFSET UNITYSDK_OFFSET(0x8CA84C0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_02952E97FE631CE3_OFFSET UNITYSDK_OFFSET(0x8CA63F0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_1090A00B61E00D76_OFFSET UNITYSDK_OFFSET(0x8CA62A0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x8CA8590)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8CA63E0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_38BDC7CF2BA70688_OFFSET UNITYSDK_OFFSET(0x8CA6460)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_4C4144000771BDC8_OFFSET UNITYSDK_OFFSET(0x8CA6310)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x8CA6530)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_AFC8215C57A0845A_1_OFFSET UNITYSDK_OFFSET(0x8CA7670)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x8CA7A80)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_C4EFD31239F98A71_OFFSET UNITYSDK_OFFSET(0x8CA6AB0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_C8D6D8DA0C67D22D_OFFSET UNITYSDK_OFFSET(0x8CA6660)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8CA8530)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CA6600)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_D241F0541DE3E6D8_OFFSET UNITYSDK_OFFSET(0x8CA7F60)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_F0732D6414502186_OFFSET UNITYSDK_OFFSET(0x8CA7E90)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_FD3E53D0206B2739_OFFSET UNITYSDK_OFFSET(0x8CA8AD0)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8CA5720)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CA6070)
#define MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA6060)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVGroupTextureSheetBehaviour_TypeDefinitionIndex = 53753;

	class TVGroupTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2DFA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_originalSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2DFA8);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2DFB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVGroupTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2DFB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_editorSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVGroupTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2DFC0);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::Il2CppArray<::System::String*>* sharedMaterialPathes; // 0x20
		::MoleMole::Timeline::TVGroupTextureSheetBehaviour_Enum_3_1B0311C3DF450371 displayEnum; // 0x28
		::System::String* videoPath; // 0x30
		::System::Boolean videoLoop; // 0x38
		::System::Int32 sheetTemplateID; // 0x3C
		::UnityEngine::Texture2D* screenMapTexture; // 0x40
		::MoleMole::TextureSheetData* textureSheetConfig; // 0x48
		::Il2CppArray<::Class_1_927FD65E44A20102*>* textureSheetAnimations; // 0x50
		::Il2CppArray<::Class_1_A02EEEDBDD11A4F9*>* moviePlayers; // 0x58
		::MoleMole::TextureSheetData* textureAssetConfig; // 0x60
		::System::Boolean isPlaying; // 0x68
		::System::Single currentPlayTime; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_1090A00B61E00D76()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_1090A00B61E00D76_OFFSET))(this);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_02952E97FE631CE3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_02952E97FE631CE3_OFFSET))(this);
		}

		::System::Void Method_2_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_2_C8D6D8DA0C67D22D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_C8D6D8DA0C67D22D_OFFSET))(this);
		}

		::System::Void Method_2_C4EFD31239F98A71()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_C4EFD31239F98A71_OFFSET))(this);
		}

		::System::Void Method_2_F0732D6414502186()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_F0732D6414502186_OFFSET))(this);
		}

		::System::Void Method_2_38BDC7CF2BA70688(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_38BDC7CF2BA70688_OFFSET))(this, a1);
		}

		::System::Void Method_2_02952E97FE631CE3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_02952E97FE631CE3_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_2_D241F0541DE3E6D8(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_D241F0541DE3E6D8_OFFSET))(this, a1);
		}

		::System::Void Method_2_AFC8215C57A0845A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
		}

		::System::Void Method_2_4C4144000771BDC8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_4C4144000771BDC8_OFFSET))(this);
		}

		::System::Void Method_2_AFC8215C57A0845A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_AFC8215C57A0845A_1_OFFSET))(this);
		}

		::System::Void Method_2_1713F44301AA802F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_1713F44301AA802F_OFFSET))(this);
		}

		::System::Void Method_2_FD3E53D0206B2739(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVGROUPTEXTURESHEETBEHAVIOUR_METHOD_2_FD3E53D0206B2739_OFFSET))(this, a1, a2, a3);
		}
	};
}
