#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace miHoYoEmotion { class ClipShapeCurveCell; }

#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_0_OFFSET UNITYSDK_OFFSET(0x18FC9AC0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_1_OFFSET UNITYSDK_OFFSET(0x18FC9AD0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDCURVE_B__29_2_OFFSET UNITYSDK_OFFSET(0x18FC9AE0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_0_OFFSET UNITYSDK_OFFSET(0x18FC9B60)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ADDSTOPCURVEBINDING_B__34_2_OFFSET UNITYSDK_OFFSET(0x18FC9B80)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FC9A70)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC9AB0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__HIGHMOODADDCURVE_B__31_0_OFFSET UNITYSDK_OFFSET(0x18FC9B20)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__ISMATCHBLENDNAME_B__32_0_OFFSET UNITYSDK_OFFSET(0x18FC9B30)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0x18FC9AF0)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_1_OFFSET UNITYSDK_OFFSET(0x18FC9B00)
#define MIHOYOEMOTION_CLIPEMOTRACK___C__LOWMOODADDCURVE_B__30_2_OFFSET UNITYSDK_OFFSET(0x18FC9B10)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoTrack___c_TypeDefinitionIndex = 37150;

	class ClipEmoTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__34_2()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286B0);
		}
		static ::System::Func_2<::miHoYoEmotion::ClipShapeCurveCell*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::miHoYoEmotion::ClipShapeCurveCell*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286B8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286C0);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286C8);
		}
		static ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286D0);
		}
		static ::System::Func_2<::miHoYoEmotion::BlendShapeData, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::miHoYoEmotion::BlendShapeData, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286D8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286E0);
		}
		static ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286E8);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__30_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286F0);
		}
		static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::miHoYoEmotion::ClipShapeCurveCell*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x286F8);
		}
		static ::miHoYoEmotion::ClipEmoTrack___c** StaticGet___9()
		{
			return (::miHoYoEmotion::ClipEmoTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ClipEmoTrack___c_TypeDefinitionIndex)->GetStaticField(0x28700);
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
