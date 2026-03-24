#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_30D3D578039787FA;
class Class_1_927FD65E44A20102;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
class Class_2_CE524E0BB2F7DB94;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ADDENDEVENT_OFFSET UNITYSDK_OFFSET(0x98695F0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x9866C20)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x9866CB0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x9866C40)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x9866DF0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x9866C30)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INITRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x9867EC0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INIT_OFFSET UNITYSDK_OFFSET(0x98674F0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9869490)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x98691F0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYRAWIMAGESINGLEFRAME_OFFSET UNITYSDK_OFFSET(0x9868CD0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYSINGLEFRAME_OFFSET UNITYSDK_OFFSET(0x98685D0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REFRESHRUNTIMEFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9869500)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REMOVEENDEVENT_OFFSET UNITYSDK_OFFSET(0x9869690)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9866EC0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9869790)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x9869730)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int UITextureSheetRender_TypeDefinitionIndex = 53174;

	class UITextureSheetRender : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xE0C0);
		}
		static ::System::Int32* StaticGet_Field_6_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xE0C4);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xE0C8);
		}
		static ::System::Int32* StaticGet_Field_6_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xE0CC);
		}
		static ::System::Int32* StaticGet_Field_6_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xE0D0);
		}
		::System::UInt32 m_Columns; // 0x18
		::System::UInt32 m_Rows; // 0x1C
		::System::UInt32 m_Frames; // 0x20
		::System::UInt32 m_CurrentFrame; // 0x24
		::UnityEngine::UI::Graphic* Field_6_4; // 0x28
		::System::String* Field_6_7; // 0x30
		::UnityEngine::Vector4 Field_6_8; // 0x38
		::UnityEngine::Texture2D* Field_6_9; // 0x48
		::System::String* Field_6_11; // 0x50
		::UnityEngine::Material* modifiMat; // 0x58
		::Class_2_CE524E0BB2F7DB94* LogicRunner; // 0x60
		::Class_1_30D3D578039787FA* proxy; // 0x68
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_6_15; // 0x70
		::System::Boolean Field_6_16; // 0x78
		::Class_1_927FD65E44A20102* Field_6_17; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CCTOR_OFFSET))();
		}

		::System::UInt32 get_columns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_COLUMNS_OFFSET))(this);
		}

		::System::UInt32 get_rows()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_ROWS_OFFSET))(this);
		}

		::System::UInt32 get_frames()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_FRAMES_OFFSET))(this);
		}

		::System::UInt32 get_currentFrame()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_CURRENTFRAME_OFFSET))(this);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Material* Init(::Class_2_CE524E0BB2F7DB94* a1, ::Class_1_30D3D578039787FA* a2, ::Class_2_A8F5ABF31E066ED4* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::Class_2_CE524E0BB2F7DB94*, ::Class_1_30D3D578039787FA*, ::Class_2_A8F5ABF31E066ED4*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitRawImage(::Class_2_CE524E0BB2F7DB94* a1, ::Class_1_30D3D578039787FA* a2, ::Class_2_CA67A9CEB871FFD3* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CE524E0BB2F7DB94*, ::Class_1_30D3D578039787FA*, ::Class_2_CA67A9CEB871FFD3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INITRAWIMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlaySingleFrame(::Class_1_30D3D578039787FA* a1, ::Class_2_A8F5ABF31E066ED4* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_30D3D578039787FA*, ::Class_2_A8F5ABF31E066ED4*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYSINGLEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayRawImageSingleFrame(::Class_1_30D3D578039787FA* a1, ::Class_2_CA67A9CEB871FFD3* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_30D3D578039787FA*, ::Class_2_CA67A9CEB871FFD3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYRAWIMAGESINGLEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRuntimeFrequency(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REFRESHRUNTIMEFREQUENCY_OFFSET))(this, a1);
		}

		::System::Void AddEndEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ADDENDEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveEndEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REMOVEENDEVENT_OFFSET))(this, a1);
		}
	};
}
