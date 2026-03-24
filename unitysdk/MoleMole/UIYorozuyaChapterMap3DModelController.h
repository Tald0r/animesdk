#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_220C85620F1F16CC;
class Class_1_44AAA438E2A4B4B4;
class Class_1_6C36C0127DB30EF4;
class Class_1_C52C1BF5199A0D45;
class Class_2_208CC9941471731A_580;
class Class_2_79F6D62CE30E3F8E_81;
class Class_2_DBD69E52FAE36934;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaConfig; }
namespace MoleMole { class UIYorozuyaPageController; }
namespace MoleMole { class UIYorozuyaSphereItemWidgetController; }
namespace MoleMole { class YorozuyaCubeGridData; }
namespace MoleMole::Config { class ChapterGridNoiseConfig; }
namespace MoleMole::Config { class HollowMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ExpHeightFogConfig; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ABYSSTONORMAL3D_OFFSET UNITYSDK_OFFSET(0x95C1610)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_CHECKCUBEMESHRENDER_OFFSET UNITYSDK_OFFSET(0x95C1010)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETANCHORPOINTS_OFFSET UNITYSDK_OFFSET(0x95BF300)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETCUBEGRIDFADEOUTDURATION_OFFSET UNITYSDK_OFFSET(0x95C02B0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETRALLYWIDGETAUTOOPENDELAY_OFFSET UNITYSDK_OFFSET(0x95C1DC0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETVOLUMECURVEVALUE_OFFSET UNITYSDK_OFFSET(0x95C1360)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x95BD5A0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_INITCITYHOLLOWMAP_OFFSET UNITYSDK_OFFSET(0x95BF370)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_KILLMAPTIPSSHOWDELAY_OFFSET UNITYSDK_OFFSET(0x95C1290)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95BEB00)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LOADMATERIALPROPERTYANDTEXTURE_OFFSET UNITYSDK_OFFSET(0x95BFA40)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONALLSPHEREHIDE_OFFSET UNITYSDK_OFFSET(0x95C0F00)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONALLSPHERESHOW_OFFSET UNITYSDK_OFFSET(0x95C1140)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x95BF030)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95BDCA0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x95BDD40)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95BDEB0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95BD5C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95BDC30)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYHIDEMAP_OFFSET UNITYSDK_OFFSET(0x95C0D40)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSPHERETRACKFADEANI_OFFSET UNITYSDK_OFFSET(0x95C0320)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSTARTMAP_OFFSET UNITYSDK_OFFSET(0x95C0890)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REFRESHREFLECTIONPROBE_OFFSET UNITYSDK_OFFSET(0x95BEE40)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REGISTERVOLUME_OFFSET UNITYSDK_OFFSET(0x95BDA30)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_RESETVOLUME_OFFSET UNITYSDK_OFFSET(0x95BE0D0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCONTINER_OFFSET UNITYSDK_OFFSET(0x95BF290)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCUBEGRIDEMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x95C19C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETSOUNDWILLHIDESPHERE_OFFSET UNITYSDK_OFFSET(0x95BF600)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETSOUNDWILLSHOWSPHERE_OFFSET UNITYSDK_OFFSET(0x95BF820)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETYOROZUYACAMERA_OFFSET UNITYSDK_OFFSET(0x95BEF00)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x95BD5B0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SHOWCURRENTSPHERE_OFFSET UNITYSDK_OFFSET(0x95C03F0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SWITCHHOLLOWGROUP_OFFSET UNITYSDK_OFFSET(0x95C1470)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TICKENDMAP_OFFSET UNITYSDK_OFFSET(0x95BE8E0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TICKSTARTMAP_OFFSET UNITYSDK_OFFSET(0x95BE6C0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TRYHIDEALLSPHEREANDSHOWNEW_OFFSET UNITYSDK_OFFSET(0x95BFF30)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATESPHERESINK_OFFSET UNITYSDK_OFFSET(0x95BE1F0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATETEST_OFFSET UNITYSDK_OFFSET(0x95C0200)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0x95BEB70)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x95BE170)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x95C1F50)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95C1E40)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__SHOWCURRENTSPHERE_B__30_0_OFFSET UNITYSDK_OFFSET(0x95C2000)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__TRYHIDEALLSPHEREANDSHOWNEW_B__25_0_OFFSET UNITYSDK_OFFSET(0x95C1F60)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95C2040)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x95C20B0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95C2140)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95C2150)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x95C2160)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex = 65348;

	class UIYorozuyaChapterMap3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Boolean* StaticGet_isDebugPotLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0xF5F0);
		}
		static ::System::Boolean* StaticGet_isDebugReflectProbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0xF5F1);
		}
		static ::System::Boolean* StaticGet_isDebugLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0xF5F2);
		}
		static ::System::Boolean* StaticGet_isDebugVolume()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaChapterMap3DModelController_TypeDefinitionIndex)->GetStaticField(0xF5F3);
		}
		::MoleMole::UIYorozuyaConfig* _yorozuyaConfig; // 0x340
		::MoleMole::Config::HollowMap* mapConfig; // 0x348
		::Foundation::Coroutine::CoroutineHandle _showSphereDelayHandle; // 0x350
		::System::Single cubeGrid_StartTickTime; // 0x354
		::System::Single cubeGrid_EndTickTime; // 0x358
		::System::Single NoiseIntensityFadeInTime; // 0x35C
		::Class_2_79F6D62CE30E3F8E_81* _view; // 0x360
		::Class_1_C52C1BF5199A0D45* _camera; // 0x368
		::UnityEngine::Rendering::Universal::ExpHeightFogConfig* cacheFogConfig; // 0x370
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* _environmentE; // 0x378
		::MoleMole::UIYorozuyaPageController* _mainPage; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>* sphereList; // 0x388
		::System::Int32 cubeGrid_FrameIndex; // 0x390
		::System::Int32 cubeGrid_StartFramMax; // 0x394
		::System::Int32 cubeGrid_StartBlockFramMax; // 0x398
		::System::Int32 cubeGrid_EndFramMax; // 0x39C
		::System::Single startNoiseIntensity; // 0x3A0
		::System::Int32 startAutoFrameCount; // 0x3A4
		::System::Int32 widgetAutoFrameCount; // 0x3A8
		::System::Boolean hasCurrentMapAnimation; // 0x3AC
		::System::Boolean hasPreMapAnimation; // 0x3AD
		::System::Boolean cubeGrid_StartSwitch; // 0x3AE
		::System::Boolean cubeGrid_EndtSwitch; // 0x3AF
		::Class_1_220C85620F1F16CC* _currentSelectChapter; // 0x3B0
		::UnityEngine::GameObject* yorozuyaFocus; // 0x3B8
		::UnityEngine::MeshRenderer* _mesh; // 0x3C0
		::UnityEngine::MeshRenderer* renderer_start; // 0x3C8
		::UnityEngine::MeshRenderer* renderer_end; // 0x3D0
		::UnityEngine::MaterialPropertyBlock* _materialProperty; // 0x3D8
		::Class_2_DBD69E52FAE36934* _yorozuyaModel; // 0x3E0
		::System::Collections::Generic::List_1<::Class_1_6C36C0127DB30EF4*>* _sphereProps; // 0x3E8
		::Class_1_44AAA438E2A4B4B4* _tipContiner; // 0x3F0
		::System::Single fogTargetDistance; // 0x3F8
		::System::Single fogStartDistance; // 0x3FC
		::Il2CppArray<::UnityEngine::Vector4>* _sphereParamArray; // 0x400
		::Il2CppArray<::UnityEngine::Vector4>* _prevSphereParamArray; // 0x408
		::Class_2_208CC9941471731A_580* preSelectChapter; // 0x410
		::UnityEngine::Rendering::Volume* volume; // 0x418
		::UnityEngine::Rendering::Universal::NapBloom* napBloom; // 0x420
		::System::Single defaultGlareScale; // 0x428
		::System::Single volumeTimeCounter; // 0x42C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::MoleMole::UIYorozuyaConfig* get_Config()
		{
			return ((::MoleMole::UIYorozuyaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::MoleMole::UIYorozuyaConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIYorozuyaConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RefreshReflectionProbe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REFRESHREFLECTIONPROBE_OFFSET))(this);
		}

		::System::Void SetYorozuyaCamera(::Class_1_C52C1BF5199A0D45* cam, ::MoleMole::UIYorozuyaPageController* mainPage, ::MoleMole::UIYorozuyaChapterMap3DModelController* modelController)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C52C1BF5199A0D45*, ::MoleMole::UIYorozuyaPageController*, ::MoleMole::UIYorozuyaChapterMap3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETYOROZUYACAMERA_OFFSET))(this, cam, mainPage, modelController);
		}

		::System::Void OnClick(::System::Int32 hollowID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONCLICK_OFFSET))(this, hollowID);
		}

		::System::Void SetContiner(::Class_1_44AAA438E2A4B4B4* continer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44AAA438E2A4B4B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCONTINER_OFFSET))(this, continer);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>* GetAnchorPoints()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaSphereItemWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETANCHORPOINTS_OFFSET))(this);
		}

		::System::Void InitCityHollowMap(::System::Int32 defaultSelectQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_INITCITYHOLLOWMAP_OFFSET))(this, defaultSelectQuestID);
		}

		::System::Void UpdateTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATETEST_OFFSET))(this);
		}

		::System::Single GetCubeGridFadeOutDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETCUBEGRIDFADEOUTDURATION_OFFSET))(this);
		}

		::System::Void PlaySphereTrackFadeAni(::System::Boolean isFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSPHERETRACKFADEANI_OFFSET))(this, isFadeIn);
		}

		::System::Void TryHideAllSphereAndShowNew(::System::Single delay, ::System::Int32 defaultQuest, ::System::Single blockTimeReduce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TRYHIDEALLSPHEREANDSHOWNEW_OFFSET))(this, delay, defaultQuest, blockTimeReduce);
		}

		::System::Void OnAllSphereHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONALLSPHEREHIDE_OFFSET))(this);
		}

		::System::Void OnAllSphereShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ONALLSPHERESHOW_OFFSET))(this);
		}

		::System::Void KillMapTipsShowDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_KILLMAPTIPSSHOWDELAY_OFFSET))(this);
		}

		::System::Void ShowCurrentSphere()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SHOWCURRENTSPHERE_OFFSET))(this);
		}

		::System::Void SetSoundWillShowSphere(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETSOUNDWILLSHOWSPHERE_OFFSET))(this, value);
		}

		::System::Void SetSoundWillHideSphere(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETSOUNDWILLHIDESPHERE_OFFSET))(this, value);
		}

		::System::Void RegisterVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_REGISTERVOLUME_OFFSET))(this);
		}

		::System::Void UpdateVolume(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATEVOLUME_OFFSET))(this, deltaTime);
		}

		::System::Single GetVolumeCurveValue(::UnityEngine::AnimationCurve* curve, ::System::Single startValue, ::System::Single endValue, ::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETVOLUMECURVEVALUE_OFFSET))(this, curve, startValue, endValue, curTime, totalTime);
		}

		::System::Void ResetVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_RESETVOLUME_OFFSET))(this);
		}

		::System::Void SwitchHollowGroup(::System::Int32 defaultSelectQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SWITCHHOLLOWGROUP_OFFSET))(this, defaultSelectQuestID);
		}

		::System::Void AbyssToNormal3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_ABYSSTONORMAL3D_OFFSET))(this);
		}

		::System::Void CheckCubeMeshRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_CHECKCUBEMESHRENDER_OFFSET))(this);
		}

		::System::Void UpdateSphereSink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_UPDATESPHERESINK_OFFSET))(this);
		}

		::System::Void PlayHideMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYHIDEMAP_OFFSET))(this);
		}

		::System::Void PlayStartMap(::System::Boolean isStartIn, ::System::Int32 defaultQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_PLAYSTARTMAP_OFFSET))(this, isStartIn, defaultQuestID);
		}

		::System::Void TickEndMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TICKENDMAP_OFFSET))(this);
		}

		::System::Void TickStartMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_TICKSTARTMAP_OFFSET))(this);
		}

		::System::Boolean LoadMaterialPropertyAndTexture(::Class_2_208CC9941471731A_580* config, ::System::Boolean setStart, ::System::Boolean setEnd)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_580*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_LOADMATERIALPROPERTYANDTEXTURE_OFFSET))(this, config, setStart, setEnd);
		}

		::System::Single GetRallyWidgetAutoOpenDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_GETRALLYWIDGETAUTOOPENDELAY_OFFSET))(this);
		}

		::System::Void SetCubeGrideMatProperty(::UnityEngine::MeshRenderer* renderer, ::MoleMole::YorozuyaCubeGridData* data, ::UnityEngine::Texture2D* ani, ::UnityEngine::Texture2D* noise, ::MoleMole::Config::ChapterGridNoiseConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::MoleMole::YorozuyaCubeGridData*, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::MoleMole::Config::ChapterGridNoiseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER_SETCUBEGRIDEMATPROPERTY_OFFSET))(this, renderer, data, ani, noise, config);
		}

		::System::Void _TryHideAllSphereAndShowNew_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__TRYHIDEALLSPHEREANDSHOWNEW_B__25_0_OFFSET))(this);
		}

		::System::Void _ShowCurrentSphere_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER__SHOWCURRENTSPHERE_B__30_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
