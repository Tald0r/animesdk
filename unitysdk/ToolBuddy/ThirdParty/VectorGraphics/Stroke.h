#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/Matrix2D.h"

namespace ToolBuddy::ThirdParty::VectorGraphics { class IFill; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x198409E0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_FILL_OFFSET UNITYSDK_OFFSET(0x198409C0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_HALFTHICKNESS_OFFSET UNITYSDK_OFFSET(0x19840A10)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_PATTERNOFFSET_OFFSET UNITYSDK_OFFSET(0x19840A50)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x19840A30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_TIPPEDCORNERLIMIT_OFFSET UNITYSDK_OFFSET(0x19840A70)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_FILLTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19840A00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_FILL_OFFSET UNITYSDK_OFFSET(0x198409D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_HALFTHICKNESS_OFFSET UNITYSDK_OFFSET(0x19840A20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_PATTERNOFFSET_OFFSET UNITYSDK_OFFSET(0x19840A60)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x19840A40)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_TIPPEDCORNERLIMIT_OFFSET UNITYSDK_OFFSET(0x19840A80)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19823DD0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int Stroke_TypeDefinitionIndex = 27998;

	class Stroke : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _Pattern_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::IFill* _Fill_k__BackingField; // 0x18
		::System::Single _PatternOffset_k__BackingField; // 0x20
		::System::Single _TippedCornerLimit_k__BackingField; // 0x24
		::System::Single _HalfThickness_k__BackingField; // 0x28
		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D m_FillTransform; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE__CTOR_OFFSET))(this);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::IFill* get_Fill()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::IFill*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_FILL_OFFSET))(this);
		}

		::System::Void set_Fill(::ToolBuddy::ThirdParty::VectorGraphics::IFill* value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::IFill*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_FILL_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_FillTransform()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_FILLTRANSFORM_OFFSET))(this);
		}

		::System::Void set_FillTransform(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_FILLTRANSFORM_OFFSET))(this, value);
		}

		::System::Single get_HalfThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_HALFTHICKNESS_OFFSET))(this);
		}

		::System::Void set_HalfThickness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_HALFTHICKNESS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_Pattern()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_PATTERN_OFFSET))(this);
		}

		::System::Void set_Pattern(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_PATTERN_OFFSET))(this, value);
		}

		::System::Single get_PatternOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_PATTERNOFFSET_OFFSET))(this);
		}

		::System::Void set_PatternOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_PATTERNOFFSET_OFFSET))(this, value);
		}

		::System::Single get_TippedCornerLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_GET_TIPPEDCORNERLIMIT_OFFSET))(this);
		}

		::System::Void set_TippedCornerLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_STROKE_SET_TIPPEDCORNERLIMIT_OFFSET))(this, value);
		}
	};
}
