#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_60381F70E527D2E3;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET UNITYSDK_OFFSET(0x9531DA0)
#define CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x9531E30)
#define CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x9531EF0)
#define CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET UNITYSDK_OFFSET(0x9531B00)

inline static constexpr unsigned int Class_3_60381F70E527D2E3_Class_1_FF0620E4EE271BCF_TypeDefinitionIndex = 51026;

class Class_3_60381F70E527D2E3_Class_1_FF0620E4EE271BCF : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x40
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x70
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0xA0
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0xD0
	::System::Boolean Field_1_0; // 0xD8

	::System::Void _ctor(::Struct_2_FE667B282E242C72& a1, ::Class_3_60381F70E527D2E3* a2, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Class_3_60381F70E527D2E3*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_84F5936FB5227BFE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_84F5936FB5227BFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60381F70E527D2E3_CLASS_1_FF0620E4EE271BCF_METHOD_1_A40475C44AA8CEAB_OFFSET))(this);
	}
};
