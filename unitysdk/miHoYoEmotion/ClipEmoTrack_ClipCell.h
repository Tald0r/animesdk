#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace miHoYoEmotion { class ClipShapeCurveCell; }
namespace miHoYoEmotion { class ClipShapeElement; }
namespace miHoYoEmotion { class ClipShapeManager_ClipShapeRuntime; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }

#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKBINDING_OFFSET UNITYSDK_OFFSET(0x848150)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKCURVE_OFFSET UNITYSDK_OFFSET(0x848140)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINBINDING_OFFSET UNITYSDK_OFFSET(0x847D00)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINCURVE_OFFSET UNITYSDK_OFFSET(0x847CF0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTBINDING_OFFSET UNITYSDK_OFFSET(0x847EC0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTCURVE_OFFSET UNITYSDK_OFFSET(0x847EB0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x848040)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCURVECNT_OFFSET UNITYSDK_OFFSET(0x848080)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPBINDINGVALID_OFFSET UNITYSDK_OFFSET(0x847F80)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPVALID_OFFSET UNITYSDK_OFFSET(0x847ED0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCURVEVALID_OFFSET UNITYSDK_OFFSET(0x848070)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCLIPVALID_OFFSET UNITYSDK_OFFSET(0x847B50)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCURVEVALID_OFFSET UNITYSDK_OFFSET(0x847B80)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCLIPVALID_OFFSET UNITYSDK_OFFSET(0x847D10)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCURVEVALID_OFFSET UNITYSDK_OFFSET(0x847DE0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x848160)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x847B70)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCURVECNT_OFFSET UNITYSDK_OFFSET(0x847C30)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCLIPDURATION_OFFSET UNITYSDK_OFFSET(0x847DD0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCURVECNT_OFFSET UNITYSDK_OFFSET(0x847DF0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoTrack_ClipCell_TypeDefinitionIndex = 36129;

	struct alignas(8) ClipEmoTrack_ClipCell
	{
		::miHoYoEmotion::ClipShapeElement* element; // 0x10
		::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime* shapeRuntime; // 0x18

		::System::Boolean get_IsMainClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCLIPVALID_OFFSET))(this);
		}

		::System::Single get_MainClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsMainCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISMAINCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_MainCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_MAINCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetMainCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetMainBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETMAINBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsPostClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCLIPVALID_OFFSET))(this);
		}

		::System::Single get_PostClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsPostCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISPOSTCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_PostCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_POSTCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetPostCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetPostBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETPOSTBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsBlinkClipValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPVALID_OFFSET))(this);
		}

		::System::Boolean get_IsBlinkClipBindingValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCLIPBINDINGVALID_OFFSET))(this);
		}

		::System::Single get_BlinkClipDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCLIPDURATION_OFFSET))(this);
		}

		::System::Boolean get_IsBlinkCurveValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISBLINKCURVEVALID_OFFSET))(this);
		}

		::System::Int32 get_BlinkCurveCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_BLINKCURVECNT_OFFSET))(this);
		}

		::miHoYoEmotion::ClipShapeCurveCell* GetBlinkCurve(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeCurveCell*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKCURVE_OFFSET))(this, index);
		}

		::miHoYoEmotion::ClipShapeManager_CurveBinding* GetBlinkBinding(::System::Int32 index)
		{
			return ((::miHoYoEmotion::ClipShapeManager_CurveBinding*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GETBLINKBINDING_OFFSET))(this, index);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLIPCELL_GET_ISVALID_OFFSET))(this);
		}
	};
}
