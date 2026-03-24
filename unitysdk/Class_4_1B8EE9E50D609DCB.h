#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Foundation/ViewObject/Structures/FSplineSessionArgs.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_1B8EE9E50D609DCB_METHOD_4_4F380AA237CFC2CA_OFFSET UNITYSDK_OFFSET(0x99557E0)
#define CLASS_4_1B8EE9E50D609DCB_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x9954F40)
#define CLASS_4_1B8EE9E50D609DCB_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9955CC0)
#define CLASS_4_1B8EE9E50D609DCB_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x9955330)
#define CLASS_4_1B8EE9E50D609DCB_METHOD_4_D88D1116A8BF2CCF_OFFSET UNITYSDK_OFFSET(0x9955430)
#define CLASS_4_1B8EE9E50D609DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x9955A60)

inline static constexpr unsigned int Class_4_1B8EE9E50D609DCB_TypeDefinitionIndex = 46291;

class Class_4_1B8EE9E50D609DCB : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_4_5; // 0x18
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::Config::Spline_WayPoint>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_2; // 0x30
	::Class_4_D0B094D0B900A9F0<::System::String*>* Field_4_3; // 0x38
	::Class_3_B537A0AA78803363* Field_4_6; // 0x40
	::Class_4_D0B094D0B900A9F0<::MoleMole::Config::Spline_WayPoint>* Field_4_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_D88D1116A8BF2CCF(::Struct_2_FE667B282E242C72& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB_METHOD_4_D88D1116A8BF2CCF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_4F380AA237CFC2CA(::Struct_2_FE667B282E242C72& a1, ::Foundation::ViewObject::Structures::FSplineSessionArgs& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Foundation::ViewObject::Structures::FSplineSessionArgs&))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB_METHOD_4_4F380AA237CFC2CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1B8EE9E50D609DCB_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
