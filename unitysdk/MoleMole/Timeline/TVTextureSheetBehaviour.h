#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TVTextureSheetBehaviour_DisplayEnum.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_A02EEEDBDD11A4F9;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_1CEEF77852A1EC58_OFFSET UNITYSDK_OFFSET(0x8F4A0A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x8F49430)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8F4BAF0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x8F4B110)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_5A89F090AC5C6BC6_OFFSET UNITYSDK_OFFSET(0x8F49CD0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET UNITYSDK_OFFSET(0x8F4B470)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x8F4B9D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x8F4A640)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_891AE2223A8E0EF9_OFFSET UNITYSDK_OFFSET(0x8F496A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x8F48DC0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_BFBB10E7279A4D84_OFFSET UNITYSDK_OFFSET(0x8F499C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x8F49C00)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8F4BA90)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F49BA0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D109CE569415FA03_1_OFFSET UNITYSDK_OFFSET(0x8F4B650)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x8F490B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D9E007C6EC0F16C4_OFFSET UNITYSDK_OFFSET(0x8F48E40)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x8F49590)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x8F49610)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x8F48370)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F48B90)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x8F48B80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSheetBehaviour_TypeDefinitionIndex = 78456;

	class TVTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x36830);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x36838);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_editorSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x36840);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x36848);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_originalSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x36850);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Int32 materialIndex; // 0x20
		::System::String* sharedMaterialPath; // 0x28
		::MoleMole::Timeline::TVTextureSheetBehaviour_DisplayEnum displayEnum; // 0x30
		::System::Boolean IsFixframe; // 0x34
		::System::String* videoPath; // 0x38
		::System::Boolean videoLoop; // 0x40
		::System::String* textureSheetKey; // 0x48
		::Class_1_927FD65E44A20102* textureSheetAnimation; // 0x50
		::Class_1_A02EEEDBDD11A4F9* moviePlayer; // 0x58
		::MoleMole::TextureSheetData* templateConfig; // 0x60
		::System::Boolean isPlaying; // 0x68
		::System::Single currentPlayTime; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Collections::IEnumerable* Method_2_D9E007C6EC0F16C4()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D9E007C6EC0F16C4_OFFSET))(this);
		}

		::System::Void Method_2_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_2_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Boolean Method_2_891AE2223A8E0EF9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_891AE2223A8E0EF9_OFFSET))(this);
		}

		::UnityEngine::Material* Method_2_BFBB10E7279A4D84()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_BFBB10E7279A4D84_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_C8E2469222842786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET))(this);
		}

		::System::Boolean Method_2_5A89F090AC5C6BC6(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_5A89F090AC5C6BC6_OFFSET))(this, a1);
		}

		::System::Void Method_2_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_2_1CEEF77852A1EC58(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_1CEEF77852A1EC58_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6103E5D7CF046E3B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_D109CE569415FA03_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_D109CE569415FA03_1_OFFSET))(this);
		}

		::System::Void Method_2_7B0A407379BA27E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
		}

		::System::Void Method_2_F620DD2FD48DDF53(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET))(this, a1);
		}

		::System::Void Method_2_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_3AA20A0DA6990FBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
		}
	};
}
