#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Enum_3_C2590AF4587ACE76.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A43CC995889687F;
class Class_2_AA9239F66AD90F88;
class Class_2_AA9239F66AD90F88_2;
class Class_2_AA9239F66AD90F88_5;
class Class_2_AA9239F66AD90F88_6;
class Class_2_AA9239F66AD90F88_8;
class Class_2_CE524E0BB2F7DB94;
class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC3288A0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC328880)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC328850)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC328860)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0xC328BE0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0xC32A2E0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0xC32B0E0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_1F6790C3F844E7A6_OFFSET UNITYSDK_OFFSET(0xC32AB00)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_22F354CA4365F4FF_OFFSET UNITYSDK_OFFSET(0xC328FC0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_273BA5221BE3BB68_OFFSET UNITYSDK_OFFSET(0xC3296E0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xC329C30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0xC32C650)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC329A60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC328F50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4D7DB0CF65D56E84_OFFSET UNITYSDK_OFFSET(0xC32CE30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0xC32B040)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0xC32CFB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_82D8292DE05D59DD_OFFSET UNITYSDK_OFFSET(0xC32A4B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_968BB264969CFE33_OFFSET UNITYSDK_OFFSET(0xC32ADA0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0xC32BFB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A3876DA4C9C97BC3_OFFSET UNITYSDK_OFFSET(0xC3291B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xC328E30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0xC329390)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xC328B80)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC328B10)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_E922D61320BAF84C_OFFSET UNITYSDK_OFFSET(0xC32B830)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FF88AD7E425B49D4_OFFSET UNITYSDK_OFFSET(0xC329BB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC3288B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC328890)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0xC328870)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET UNITYSDK_OFFSET(0xC328AD0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0xC3288C0)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_TypeDefinitionIndex = 68971;

	class ScreenPlayer_TextureSheet : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PoolCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TextureSheet_TypeDefinitionIndex)->GetStaticField(0xFCE0);
		}
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_5*>* floats; // 0x10
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_2*>* vectors; // 0x18
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_8*>* matricies; // 0x20
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88*>* textures; // 0x28
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_6*>* constantBuffers; // 0x30
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_6*>* computeBuffers; // 0x38
		::System::Boolean mpbFullCopy; // 0x40
		::Enum_3_C2590AF4587ACE76 _state; // 0x44
		::MoleMole::StaticSceneObjectListLoopType _staticSceneObjectListLoopType; // 0x48
		::UnityEngine::Vector4 defaultOffset; // 0x4C
		::System::Int32 LogicRenderIndex; // 0x5C
		::System::Int32 LogicMaterialIndex; // 0x60
		::System::Int32 Current_PropertyID_Offset; // 0x64
		::System::Single cacheForceWrapRepeat; // 0x68
		::System::Boolean _isAsyncInitSuccess; // 0x6C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _TextureRequestHandleDic_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* initSyncRequestHandleDic; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _PreAsyncRequestHandleDic_k__BackingField; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _AsyncReadyRequestHandleDic_k__BackingField; // 0x88
		::Class_2_CE524E0BB2F7DB94* logic; // 0x90
		::ScreenPlayData* data; // 0x98
		::UnityEngine::Texture2D* transparentTexture; // 0xA0
		::System::Action_1<::System::Boolean>* result; // 0xA8
		::System::Int32 runingFrameIndex; // 0xB0
		::Class_1_8A43CC995889687F* screenRenderModifyer; // 0xB8
		::UnityEngine::LODGroup* _lODGroup; // 0xC0
		::UnityEngine::MaterialPropertyBlock* renderBlock; // 0xC8
		::Enum_3_B7679BF924C438A9 lodType; // 0xD0
		::UnityEngine::Renderer* render; // 0xD8
		::UnityEngine::GameObject* ScreenObject; // 0xE0
		::UnityEngine::Texture2D* currentTexture; // 0xE8
		::System::Boolean useInstanceMat; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* renderMaterials; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET))();
		}

		::Enum_3_C2590AF4587ACE76 get_State()
		{
			return ((::Enum_3_C2590AF4587ACE76(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_TextureRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_TextureRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_PreAsyncRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_PreAsyncRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* get_AsyncReadyRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_AsyncReadyRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Int32 Method_1_22F354CA4365F4FF(::UnityEngine::Shader* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_22F354CA4365F4FF_OFFSET))(this, a1);
		}

		::System::Void Method_1_A3876DA4C9C97BC3(::UnityEngine::GameObject* a1, ::Enum_3_B7679BF924C438A9 a2, ::ScreenPlayData* a3, ::System::Action_1<::System::Boolean>* a4, ::System::Action_1<::System::Boolean>* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_B7679BF924C438A9, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A3876DA4C9C97BC3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_1_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_1_FF88AD7E425B49D4(::MoleMole::ScreenPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScreenPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FF88AD7E425B49D4_OFFSET))(this, a1);
		}

		::System::Void Method_1_273BA5221BE3BB68(::System::String* a1, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_273BA5221BE3BB68_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Boolean Method_1_14F96CE90F77CBB9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_14F96CE90F77CBB9_OFFSET))(this);
		}

		::System::Boolean Method_1_82D8292DE05D59DD(::Enum_3_B7679BF924C438A9 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_B7679BF924C438A9))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_82D8292DE05D59DD_OFFSET))(this, a1);
		}

		::System::Void Method_1_968BB264969CFE33(::UnityEngine::GameObject* a1, ::Enum_3_B7679BF924C438A9 a2, ::ScreenPlayData* a3, ::System::Action_1<::System::Boolean>* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_B7679BF924C438A9, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_968BB264969CFE33_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_B8FA2BA3B5C0B3B5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_1F6790C3F844E7A6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_1F6790C3F844E7A6_OFFSET))(this);
		}

		static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
		}

		::System::Void Method_1_1659BCB6D1A9FC34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_1659BCB6D1A9FC34_OFFSET))(this);
		}

		::System::Boolean Method_1_A8F6F688241E6DBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
		}

		::System::Void Method_1_E922D61320BAF84C(::System::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_E922D61320BAF84C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_A002848F130F70CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A002848F130F70CA_OFFSET))(this);
		}

		::System::Void Method_1_42D74E8C949A6883(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_42D74E8C949A6883_OFFSET))(this, a1);
		}

		::System::Void Method_1_4D7DB0CF65D56E84()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4D7DB0CF65D56E84_OFFSET))(this);
		}

		::System::Void Method_1_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_7A5EE891DA69F667_OFFSET))(this, a1);
		}
	};
}
