#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace miHoYoEmotion { class ClipShapeCurveCell; }

#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_0_OFFSET UNITYSDK_OFFSET(0x18ADF450)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_1_OFFSET UNITYSDK_OFFSET(0x18ADF460)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_2_OFFSET UNITYSDK_OFFSET(0x18ADF470)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_0_OFFSET UNITYSDK_OFFSET(0x18ADF4F0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_2_OFFSET UNITYSDK_OFFSET(0x18ADF510)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ADF400)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADF440)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__HIGHMOODADDCURVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x18ADF4B0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ISMATCHBLENDNAME_B__32_0_OFFSET UNITYSDK_OFFSET(0x18ADF4C0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0x18ADF480)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_1_OFFSET UNITYSDK_OFFSET(0x18ADF490)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_2_OFFSET UNITYSDK_OFFSET(0x18ADF4A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoTrack___c_TypeDefinitionIndex = 36130;

	class ClipEmoTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26C80);
		}
		static ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26C88);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26C90);
		}
		static ::System::Func_2<::miHoYoEmotion::BlendShapeData, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::miHoYoEmotion::BlendShapeData, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26C98);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CA0);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__30_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CA8);
		}
		static ::System::Func_2<::miHoYoEmotion::ClipShapeCurveCell*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::miHoYoEmotion::ClipShapeCurveCell*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CB0);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__34_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CB8);
		}
		static ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CC0);
		}
		static ::miHoYoEmotion::ClipEmoTrack___c** StaticGet___9()
		{
			return (::miHoYoEmotion::ClipEmoTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CC8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x26CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _AddCurve_b__29_0(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_0_OFFSET))(this, t);
		}

		::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> _AddCurve_b__29_1(::System::Int32 idx)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_1_OFFSET))(this, idx);
		}

		::System::Int32 _AddCurve_b__29_2(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_2_OFFSET))(this, t);
		}

		::System::Int32 _LowMoodAddCurve_b__30_0(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_0_OFFSET))(this, t);
		}

		::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> _LowMoodAddCurve_b__30_1(::System::Int32 idx)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_1_OFFSET))(this, idx);
		}

		::System::Int32 _LowMoodAddCurve_b__30_2(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_2_OFFSET))(this, t);
		}

		::System::Int32 _HighMoodAddCurve_b__31_0(::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*> t)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__HIGHMOODADDCURVE_B__31_0_OFFSET))(this, t);
		}

		::System::Boolean _IsMatchBlendName_b__32_0(::miHoYoEmotion::ClipShapeCurveCell* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipShapeCurveCell*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ISMATCHBLENDNAME_B__32_0_OFFSET))(this, c);
		}

		::System::Boolean _AddStopCurveBinding_b__34_0(::miHoYoEmotion::BlendShapeData s)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::BlendShapeData))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_0_OFFSET))(this, s);
		}

		::System::Int32 _AddStopCurveBinding_b__34_2(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_2_OFFSET))(this, i);
		}
	};
}
