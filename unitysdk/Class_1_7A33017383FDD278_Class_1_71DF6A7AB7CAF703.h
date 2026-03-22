#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D46C5D064952E16_2;
class Class_2_9E8CD0C1037EB98E_11;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x88A52C0)
#define CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET UNITYSDK_OFFSET(0x88A5250)
#define CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET UNITYSDK_OFFSET(0x88A4930)

inline static constexpr unsigned int Class_1_7A33017383FDD278_Class_1_71DF6A7AB7CAF703_TypeDefinitionIndex = 48060;

class Class_1_7A33017383FDD278_Class_1_71DF6A7AB7CAF703 : public ::System::Object
{
public:
	::System::Func_3<::Class_2_9E8CD0C1037EB98E_11*, ::Class_2_9E8CD0C1037EB98E_11*, ::Class_1_3D46C5D064952E16_2*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_1<::Class_1_3D46C5D064952E16_2*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703__CTOR_OFFSET))(this);
	}

	static ::Class_1_3D46C5D064952E16_2* Method_1_84FADCB4365AB7C4(::Class_2_9E8CD0C1037EB98E_11* a1, ::Class_2_9E8CD0C1037EB98E_11* a2)
	{
		return ((::Class_1_3D46C5D064952E16_2*(*)(::Class_2_9E8CD0C1037EB98E_11*, ::Class_2_9E8CD0C1037EB98E_11*))((::PBYTE)hIl2Cpp + CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703_METHOD_1_84FADCB4365AB7C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_3D46C5D064952E16_2* a1)
	{
		return ((::System::Void(*)(::Class_1_3D46C5D064952E16_2*))((::PBYTE)hIl2Cpp + CLASS_1_7A33017383FDD278_CLASS_1_71DF6A7AB7CAF703_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}
};
