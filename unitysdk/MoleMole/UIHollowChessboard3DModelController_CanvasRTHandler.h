#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/System/Object.h"

class Class_1_FA793AB1D49D0132;
class Class_5_0B648F1F8F6AC84A;
namespace MoleMole { class NapCanvasScaler; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET UNITYSDK_OFFSET(0x97F7100)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x97F6DD0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET UNITYSDK_OFFSET(0xDFD49F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x97F6C70)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x97F67F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET UNITYSDK_OFFSET(0xDFD4460)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET UNITYSDK_OFFSET(0x97F6B70)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x97F68C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x97F7640)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0xDFD3B00)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDFD3B60)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xDFD3B80)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xDFD3AE0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0xDFD3B20)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDFD3B40)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET UNITYSDK_OFFSET(0xDFD3BA0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET UNITYSDK_OFFSET(0x97F6EB0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET UNITYSDK_OFFSET(0xDFD3B10)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDFD3B70)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xDFD3B90)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xDFD3AF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0xDFD3B30)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDFD3B50)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x97F7780)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_CanvasRTHandler_TypeDefinitionIndex = 42999;

	class UIHollowChessboard3DModelController_CanvasRTHandler : public ::System::Object
	{
	public:
		::MoleMole::NapCanvasScaler* _canvasScaler; // 0x10
		::UnityEngine::NAPRenderPipeline0::RTHandle* _renderTexture_k__BackingField; // 0x18
		::UnityEngine::Canvas* _canvas_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_5_0B648F1F8F6AC84A*>* _pieceList; // 0x28
		::UnityEngine::Camera* _rtCamera; // 0x30
		::UnityEngine::GameObject* _rtCameraObj; // 0x38
		::UnityEngine::GameObject* _rootGo; // 0x40
		::MoleMole::UIWindowController* _uiWindowController_k__BackingField; // 0x48
		::UnityEngine::GameObject* _canvasObj; // 0x50
		::UnityEngine::GameObject* _uiRootObj_k__BackingField; // 0x58
		::System::Single _cameraWidth; // 0x60
		::System::Boolean _isAssignedController_k__BackingField; // 0x64
		::System::Boolean _IsDestroyed_k__BackingField; // 0x65
		::System::Single _cameraHeight; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* get_renderTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET))(this);
		}

		::System::Void set_renderTexture(::UnityEngine::NAPRenderPipeline0::RTHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET))(this);
		}

		::System::Void set_canvas(::UnityEngine::Canvas* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_uiRootObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET))(this);
		}

		::System::Void set_uiRootObj(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET))(this, value);
		}

		::MoleMole::UIWindowController* get_uiWindowController()
		{
			return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET))(this);
		}

		::System::Void set_uiWindowController(::MoleMole::UIWindowController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_isAssignedController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_isAssignedController(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET))(this, value);
		}

		::System::Void LazyInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET))(this);
		}

		static ::UnityEngine::RectTransform* CreateFullRectOfParent(::UnityEngine::RectTransform* parent, ::System::String* name)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET))(parent, name);
		}

		::System::Void BindPiece(::Class_5_0B648F1F8F6AC84A* piece)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET))(this, piece);
		}

		::System::Void Close(::Class_5_0B648F1F8F6AC84A* piece)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET))(this, piece);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET))(this);
		}

		::System::Void AssignUIController(::MoleMole::UIWindowController* controller, ::Class_1_FA793AB1D49D0132* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET))(this, controller, openParams, uiControllerContext);
		}

		::System::Void PostOpenUI(::MoleMole::UIWindowController* uiCtrl, ::Class_1_FA793AB1D49D0132* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext, ::System::Boolean isAssignedController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET))(this, uiCtrl, openParams, uiControllerContext, isAssignedController);
		}

		::System::Void CloseUIController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET))(this);
		}

		::System::Void AllocateRT(::System::Single rtwidth, ::System::Single rtheight, ::System::Boolean needPhysicPixel, ::System::String* uiName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET))(this, rtwidth, rtheight, needPhysicPixel, uiName);
		}

		::System::Single GetCanvasScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET))(this);
		}

		::System::Boolean DeallocateRT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET))(this);
		}
	};
}
