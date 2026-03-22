#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas_WillRenderCanvases; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B0708F0)
#define UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B070A10)
#define UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET UNITYSDK_OFFSET(0x1B070E90)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B070E70)
#define UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B070E60)
#define UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B070E80)
#define UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B070CF0)
#define UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET UNITYSDK_OFFSET(0x1B070CE0)
#define UNITYENGINE_CANVAS_GET_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1B070D10)
#define UNITYENGINE_CANVAS_GET_GLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x1B070DA0)
#define UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1B070B50)
#define UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x1B070E20)
#define UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B070BF0)
#define UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x1B070C60)
#define UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B070C10)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B070BA0)
#define UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET UNITYSDK_OFFSET(0x1B070B60)
#define UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B070C30)
#define UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B070BD0)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B070D90)
#define UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0x1B070D60)
#define UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B070B30)
#define UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET UNITYSDK_OFFSET(0x1B070C50)
#define UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET UNITYSDK_OFFSET(0x1B070D50)
#define UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B070BB0)
#define UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B070E40)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B070CC0)
#define UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B070D30)
#define UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B070C80)
#define UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B070CA0)
#define UNITYENGINE_CANVAS_GET_UPDATEINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B070DE0)
#define UNITYENGINE_CANVAS_GET_USEPARENTGLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x1B070DC0)
#define UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B070E00)
#define UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B070980)
#define UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B070AA0)
#define UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B070ED0)
#define UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET UNITYSDK_OFFSET(0x1B070EF0)
#define UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET UNITYSDK_OFFSET(0x1B070D00)
#define UNITYENGINE_CANVAS_SET_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1B070D20)
#define UNITYENGINE_CANVAS_SET_GLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x1B070DB0)
#define UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET UNITYSDK_OFFSET(0x1B070E30)
#define UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B070C00)
#define UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET UNITYSDK_OFFSET(0x1B070C70)
#define UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x1B070C20)
#define UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B070C40)
#define UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1B070BE0)
#define UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B070B40)
#define UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1B070BC0)
#define UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x1B070E50)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B070CD0)
#define UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET UNITYSDK_OFFSET(0x1B070D40)
#define UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B070C90)
#define UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B070CB0)
#define UNITYENGINE_CANVAS_SET_UPDATEINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B070DF0)
#define UNITYENGINE_CANVAS_SET_USEPARENTGLOBALALPHA_OFFSET UNITYSDK_OFFSET(0x1B070DD0)
#define UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B070E10)
#define UNITYENGINE_CANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0711B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_TypeDefinitionIndex = 7677;

	class Canvas : public ::UnityEngine::Behaviour
	{
	public:
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_preWillRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x6610);
		}
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet_willRenderCanvases()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(Canvas_TypeDefinitionIndex)->GetStaticField(0x6618);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS__CTOR_OFFSET))(this);
		}

		static ::System::Void add_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_PREWILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void remove_preWillRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_PREWILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void add_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_ADD_WILLRENDERCANVASES_OFFSET))(value);
		}

		static ::System::Void remove_willRenderCanvases(::UnityEngine::Canvas_WillRenderCanvases* value)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas_WillRenderCanvases*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_REMOVE_WILLRENDERCANVASES_OFFSET))(value);
		}

		::UnityEngine::RenderMode get_renderMode()
		{
			return ((::UnityEngine::RenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::RenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_isRootCanvas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ISROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Rect get_pixelRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_OFFSET))(this);
		}

		::System::Single get_scaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_scaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SCALEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_referencePixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_REFERENCEPIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_referencePixelsPerUnit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_REFERENCEPIXELSPERUNIT_OFFSET))(this, value);
		}

		::System::Boolean get_overridePixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDEPIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_overridePixelPerfect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDEPIXELPERFECT_OFFSET))(this, value);
		}

		::System::Boolean get_pixelPerfect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELPERFECT_OFFSET))(this);
		}

		::System::Void set_pixelPerfect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PIXELPERFECT_OFFSET))(this, value);
		}

		::System::Single get_planeDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PLANEDISTANCE_OFFSET))(this);
		}

		::System::Void set_planeDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_PLANEDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_renderOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERORDER_OFFSET))(this);
		}

		::System::Boolean get_overrideSorting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_OVERRIDESORTING_OFFSET))(this);
		}

		::System::Void set_overrideSorting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_OVERRIDESORTING_OFFSET))(this, value);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Int32 get_targetDisplay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_TARGETDISPLAY_OFFSET))(this);
		}

		::System::Void set_targetDisplay(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_TARGETDISPLAY_OFFSET))(this, value);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_cachedSortingLayerValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_CACHEDSORTINGLAYERVALUE_OFFSET))(this);
		}

		::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels()
		{
			return ((::UnityEngine::AdditionalCanvasShaderChannels(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ADDITIONALSHADERCHANNELS_OFFSET))(this);
		}

		::System::Void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_ADDITIONALSHADERCHANNELS_OFFSET))(this, value);
		}

		::System::Boolean get_enableUIVertexColorCalc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::System::Void set_enableUIVertexColorCalc(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_ENABLEUIVERTEXCOLORCALC_OFFSET))(this, value);
		}

		::System::String* get_sortingLayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGLAYERNAME_OFFSET))(this);
		}

		::System::Void set_sortingLayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGLAYERNAME_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_rootCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_ROOTCANVAS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_renderingDisplaySize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_OFFSET))(this);
		}

		::System::Single get_globalAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_GLOBALALPHA_OFFSET))(this);
		}

		::System::Void set_globalAlpha(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_GLOBALALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_useParentGlobalAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_USEPARENTGLOBALALPHA_OFFSET))(this);
		}

		::System::Void set_useParentGlobalAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_USEPARENTGLOBALALPHA_OFFSET))(this, value);
		}

		static ::System::Boolean get_updateInMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_UPDATEINMAINTHREAD_OFFSET))();
		}

		static ::System::Void set_updateInMainThread(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_UPDATEINMAINTHREAD_OFFSET))(value);
		}

		::UnityEngine::Camera* get_worldCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_WORLDCAMERA_OFFSET))(this);
		}

		::System::Void set_worldCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_WORLDCAMERA_OFFSET))(this, value);
		}

		::System::Single get_normalizedSortingGridSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this);
		}

		::System::Void set_normalizedSortingGridSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_NORMALIZEDSORTINGGRIDSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_sortingGridNormalizedSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this);
		}

		::System::Void set_sortingGridNormalizedSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SET_SORTINGGRIDNORMALIZEDSIZE_OFFSET))(this, value);
		}

		static ::UnityEngine::Material* GetDefaultCanvasTextMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASTEXTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetDefaultCanvasMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETDEFAULTCANVASMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetETC1SupportedCanvasMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GETETC1SUPPORTEDCANVASMATERIAL_OFFSET))();
		}

		static ::System::Void ForceUpdateCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_FORCEUPDATECANVASES_OFFSET))();
		}

		static ::System::Void SendPreWillRenderCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDPREWILLRENDERCANVASES_OFFSET))();
		}

		static ::System::Void SendWillRenderCanvases()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_SENDWILLRENDERCANVASES_OFFSET))();
		}

		::System::Void get_pixelRect_Injected(::UnityEngine::Rect& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_PIXELRECT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_renderingDisplaySize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_GET_RENDERINGDISPLAYSIZE_INJECTED_OFFSET))(this, ret);
		}
	};
}
