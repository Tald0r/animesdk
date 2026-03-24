#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LOD.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_1_8A43CC995889687F;
class Class_2_4ADEE7902DEBF73B;
class Class_3_A8DF8B2CF8EBC070;
class ScreenPlayData;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class ScreenPlayer_TextureSheet; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B1E70)
#define MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB9AFE80)
#define MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xB9AFF20)
#define MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xB9B2050)
#define MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB9AFEA0)
#define MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET UNITYSDK_OFFSET(0xB9AFF40)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_031CF150391E9B14_OFFSET UNITYSDK_OFFSET(0xB9B5F60)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0810265D1B861881_OFFSET UNITYSDK_OFFSET(0xB9B6080)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0xB9B1AE0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB9B1A60)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_106E1EED1398BAC3_OFFSET UNITYSDK_OFFSET(0xB9B0270)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_136A2D4A777E5F48_OFFSET UNITYSDK_OFFSET(0xB9B27F0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_14E279FBAB0C92E2_OFFSET UNITYSDK_OFFSET(0xB9B5FD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB9B1710)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET UNITYSDK_OFFSET(0xB9B6E70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_15849F8CE554F058_OFFSET UNITYSDK_OFFSET(0xB9B0D70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB9B1880)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET UNITYSDK_OFFSET(0xB9B7370)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB9B5ED0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET UNITYSDK_OFFSET(0xB9B5D40)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_34E27C48868DCFB3_OFFSET UNITYSDK_OFFSET(0xB9B0A20)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_35AA1256336E8112_OFFSET UNITYSDK_OFFSET(0xB9B5DF0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET UNITYSDK_OFFSET(0xB9B6400)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4A71A6F8EF7C6F24_OFFSET UNITYSDK_OFFSET(0xB9B29C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET UNITYSDK_OFFSET(0xB9B0CD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET UNITYSDK_OFFSET(0xB9B7540)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET UNITYSDK_OFFSET(0xB9B6540)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0xB9B5CD0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xB9B2240)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0xB9B13C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET UNITYSDK_OFFSET(0xB9B6570)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7207BD0B2F768243_OFFSET UNITYSDK_OFFSET(0xB9AA150)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_7C925D77C4DBAFE3_OFFSET UNITYSDK_OFFSET(0xB9B6380)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_84713B30DA3BE782_OFFSET UNITYSDK_OFFSET(0xB9B64C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xB9AA7B0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB9B62C0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_96757FC3595E3E43_1_OFFSET UNITYSDK_OFFSET(0xB9B6680)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_96757FC3595E3E43_OFFSET UNITYSDK_OFFSET(0xB9B65D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB9B1DC0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB9AA640)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB9B5E00)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A682E540F239EE22_OFFSET UNITYSDK_OFFSET(0xB9B6730)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_A97A6D4EE559F25B_OFFSET UNITYSDK_OFFSET(0xB9B7400)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xB9B25A0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_ACABA92D6D2C50BC_OFFSET UNITYSDK_OFFSET(0xB9B75A0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_AD8D049D8DF5CCB2_OFFSET UNITYSDK_OFFSET(0xB9B6830)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB9B7490)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B70E664C5CD0DECB_OFFSET UNITYSDK_OFFSET(0xB9B6DB0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0xB9B00F0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_BAD42A15E1550F87_OFFSET UNITYSDK_OFFSET(0xB9B59A0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB9B5C70)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB9B67D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB9B7620)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xB9B1340)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9B1FF0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CB6F9BCB94300035_OFFSET UNITYSDK_OFFSET(0xB9B2A90)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET UNITYSDK_OFFSET(0xB9B28E0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_DA8915F72DE34BAE_OFFSET UNITYSDK_OFFSET(0xB9B0410)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0xB9B07B0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xB9B1B60)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_F46B5BF207C29F9A_OFFSET UNITYSDK_OFFSET(0xB9B20D0)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET UNITYSDK_OFFSET(0xB9B5B00)
#define MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET UNITYSDK_OFFSET(0xB9B73D0)
#define MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB9AFE90)
#define MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xB9AFF30)
#define MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET UNITYSDK_OFFSET(0xB9AFF50)
#define MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB9AFF60)
#define MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B2770)
#define MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB9B0970)
#define MOLEMOLE_SCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B0160)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TypeDefinitionIndex = 69532;

	class ScreenPlayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Saturation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x43000);
		}
		static ::System::String** StaticGet_Value()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x43008);
		}
		static ::System::String** StaticGet_Hue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x43010);
		}
		static ::System::String** StaticGet_BlendKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x43018);
		}
		static ::System::Int32* StaticGet__ScreenMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TypeDefinitionIndex)->GetStaticField(0x10750);
		}
		// static const ::System::String* CRIWARE_MAT_KEY; // 0x0
		::Class_1_8A43CC995889687F* _lodMaterialProxy; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x18
		::Enum_3_B7679BF924C438A9 _lodType; // 0x20
		::MoleMole::StaticSceneObjectListLoopType playMode; // 0x24
		::System::Collections::Generic::List_1<::ScreenPlayData*>* quests; // 0x28
		::System::Boolean isPlaying; // 0x30
		::ScreenPlayData* _currentPlayData_k__BackingField; // 0x38
		::System::Int32 currentPlayIndex; // 0x40
		::System::Boolean mpbFullCopy; // 0x44
		::System::Action* playSuccess; // 0x48
		::System::Action* playFaild; // 0x50
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoPrepared; // 0x58
		::System::Action_1<::MoleMole::IVideoPlayer*>* onVideoStarted; // 0x60
		::MoleMole::ScreenPlayer_TextureSheet* _playerTextureSheet; // 0x68
		::Class_3_A8DF8B2CF8EBC070* _blendTextureSheetVeUpdater; // 0x70
		::Struct_2_6E23A591AC26A31E ScreenMatInfoNew; // 0x78
		::Struct_2_6E23A591AC26A31E ScreenMatInfoOld; // 0x5A0
		::MoleMole::IVideoPlayer* _videoPlayer; // 0xAC8
		::Foundation::AssetRequestHandle _videoRequest; // 0xAD0
		::System::Boolean isPlayingVideo; // 0xAF0
		::System::Boolean openAsyncLoadNextTexture; // 0xAF1
		::System::Boolean isDebug; // 0xAF2
		::UnityEngine::GameObject* soundStaticEmitter; // 0xAF8
		::System::Boolean muteSound; // 0xB00
		::System::Boolean switchNotClean; // 0xB01
		::System::String* ownerGameobjectPath; // 0xB08
		::System::Single cacheForceWrapRepeat; // 0xB10
		::System::Boolean IsNeedFindRender; // 0xB14
		::System::Boolean _ForceUpdate_k__BackingField; // 0xB15
		::UnityEngine::GameObject* _ScreenGO_k__BackingField; // 0xB18
		::Foundation::Coroutine::CoroutineHandle delayPlay; // 0xB20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER__CCTOR_OFFSET))();
		}

		::ScreenPlayData* get_currentPlayData()
		{
			return ((::ScreenPlayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_CURRENTPLAYDATA_OFFSET))(this);
		}

		::System::Void set_currentPlayData(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_CURRENTPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_ForceUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void set_ForceUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_FORCEUPDATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ScreenGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_SCREENGO_OFFSET))(this);
		}

		::System::Void set_ScreenGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_SET_SCREENGO_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_1_106E1EED1398BAC3(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_106E1EED1398BAC3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_34E27C48868DCFB3(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_34E27C48868DCFB3_OFFSET))(this, a1);
		}

		::System::Void Method_1_15849F8CE554F058(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_15849F8CE554F058_OFFSET))(this, a1);
		}

		::System::Void Method_1_705FFC79B57F4953(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_705FFC79B57F4953_OFFSET))(this, a1);
		}

		::System::Void Method_1_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
		}

		::System::Void Method_1_0CC4BC19C602BCD0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0CC4BC19C602BCD0_1_OFFSET))(this);
		}

		::System::Void Method_1_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Texture* get_GetRenderTargetTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_GET_GETRENDERTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void Method_1_F46B5BF207C29F9A(::MoleMole::Config::BaseConfigSoundAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseConfigSoundAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_F46B5BF207C29F9A_OFFSET))(this, a1);
		}

		::System::Void Method_1_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_AA7E3074254D484A_OFFSET))(this);
		}

		::System::Void Method_1_136A2D4A777E5F48(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_136A2D4A777E5F48_OFFSET))(this, a1);
		}

		::System::Void Method_1_CD7415D0B2EB38A2(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CD7415D0B2EB38A2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4A71A6F8EF7C6F24(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4A71A6F8EF7C6F24_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_CB6F9BCB94300035(::UnityEngine::Material* a1, ::Struct_2_6E23A591AC26A31E a2, ::Struct_2_6E23A591AC26A31E a3, ::Class_2_4ADEE7902DEBF73B* a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::Struct_2_6E23A591AC26A31E, ::Struct_2_6E23A591AC26A31E, ::Class_2_4ADEE7902DEBF73B*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CB6F9BCB94300035_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_1_7207BD0B2F768243(::ScreenPlayData* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7207BD0B2F768243_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_BAD42A15E1550F87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_BAD42A15E1550F87_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_FED43F89BEEE494D(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FED43F89BEEE494D_OFFSET))(this, a1);
		}

		::System::Void Method_1_28A5AB1678E791E7(::System::Int32 a1, ::ScreenPlayData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_28A5AB1678E791E7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_35AA1256336E8112(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_35AA1256336E8112_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_1_031CF150391E9B14(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_031CF150391E9B14_OFFSET))(this, a1);
		}

		::System::Void Method_1_14E279FBAB0C92E2(::System::Collections::Generic::List_1<::ScreenPlayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ScreenPlayData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_14E279FBAB0C92E2_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DA8915F72DE34BAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_DA8915F72DE34BAE_OFFSET))(this);
		}

		::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
		}

		::System::Void Method_1_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_1_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_1_0810265D1B861881(::System::Action* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_0810265D1B861881_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_1_7C925D77C4DBAFE3(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_7C925D77C4DBAFE3_OFFSET))(this, a1);
		}

		::System::Void Method_1_3F0D4D20CAA05725(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_3F0D4D20CAA05725_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* Method_1_84713B30DA3BE782()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_84713B30DA3BE782_OFFSET))(this);
		}

		::System::Void Method_1_5CE94B0371C7CF88(::Class_1_5A6771CD0CA2718D* a1, ::UnityEngine::Vector4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_5CE94B0371C7CF88_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Void Method_1_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_1_6597F9D2D4A0542F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ScreenPlayData*>* Method_1_70BDBAE57C1C9100()
		{
			return ((::System::Collections::Generic::List_1<::ScreenPlayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_70BDBAE57C1C9100_OFFSET))(this);
		}

		::System::Void Method_1_96757FC3595E3E43(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_96757FC3595E3E43_OFFSET))(this, a1);
		}

		::System::Void Method_1_96757FC3595E3E43_1(::MoleMole::IVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_96757FC3595E3E43_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_A682E540F239EE22(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A682E540F239EE22_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_1_E5695720AB0F6E98()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
		}

		::System::Void Method_1_AD8D049D8DF5CCB2(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_AD8D049D8DF5CCB2_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_B70E664C5CD0DECB(::UnityEngine::LOD a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::LOD))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B70E664C5CD0DECB_OFFSET))(a1);
		}

		::System::Void Method_1_154998A4087BBA4C(::MoleMole::BlendTextureSheetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BlendTextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_154998A4087BBA4C_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_4BCD51618C77AD95()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_4BCD51618C77AD95_OFFSET))(this);
		}

		::MoleMole::ScreenPlayer_TextureSheet* Method_1_1CF84FBD817B0F20()
		{
			return ((::MoleMole::ScreenPlayer_TextureSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1CF84FBD817B0F20_OFFSET))(this);
		}

		::System::Void Method_1_FF8E81CF7F8437BB(::Class_1_5A6771CD0CA2718D* a1, ::MoleMole::HollowPieceBlendMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_FF8E81CF7F8437BB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_A97A6D4EE559F25B(::MoleMole::StaticSceneObjectListLoopType a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticSceneObjectListLoopType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_A97A6D4EE559F25B_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_B82A6C005D3ADCE3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B82A6C005D3ADCE3_OFFSET))(this);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_50FFE8C44036C61A()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_50FFE8C44036C61A_OFFSET))(this);
		}

		::System::Void Method_1_ACABA92D6D2C50BC(::ScreenPlayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_ACABA92D6D2C50BC_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
		}
	};
}
