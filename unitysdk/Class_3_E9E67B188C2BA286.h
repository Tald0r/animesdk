#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_174.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace System { class String; }

#define CLASS_3_E9E67B188C2BA286_METHOD_3_0F16897FB57D8E61_OFFSET UNITYSDK_OFFSET(0x84FA270)
#define CLASS_3_E9E67B188C2BA286_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x84FA5B0)
#define CLASS_3_E9E67B188C2BA286__CTOR_OFFSET UNITYSDK_OFFSET(0x84FA620)

inline static constexpr unsigned int Class_3_E9E67B188C2BA286_TypeDefinitionIndex = 65345;

class Class_3_E9E67B188C2BA286 : public ::Class_2_534AF681CC2BD5FD_174<::Class_3_E9E67B188C2BA286*>
{
public:
	::System::String* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E67B188C2BA286__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0F16897FB57D8E61(::Class_3_F35B080B137ECC46* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_E9E67B188C2BA286_METHOD_3_0F16897FB57D8E61_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E67B188C2BA286_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
