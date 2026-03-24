#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_0B70A855E72FB919_1_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x93A64F0)
#define CLASS_3_0B70A855E72FB919_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x93A6970)
#define CLASS_3_0B70A855E72FB919_1_METHOD_3_CC127949D1E8543A_OFFSET UNITYSDK_OFFSET(0x93A66D0)
#define CLASS_3_0B70A855E72FB919_1__CTOR_OFFSET UNITYSDK_OFFSET(0x93A6850)

inline static constexpr unsigned int Class_3_0B70A855E72FB919_1_TypeDefinitionIndex = 52203;

class Class_3_0B70A855E72FB919_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B70A855E72FB919_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B70A855E72FB919_1_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_CC127949D1E8543A(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0B70A855E72FB919_1_METHOD_3_CC127949D1E8543A_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B70A855E72FB919_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
