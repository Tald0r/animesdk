#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class AimController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C_METHOD_1_4F649D637F42AE66_OFFSET UNITYSDK_OFFSET(0x9B8EDD0)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C_METHOD_1_BFD24AEB375130CF_OFFSET UNITYSDK_OFFSET(0x9B8EC70)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8EC60)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_Class_1_B2D937401E7FDF1C_TypeDefinitionIndex = 61506;

class Class_3_8DEED67EBA66D5AC_Class_1_B2D937401E7FDF1C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BFD24AEB375130CF(::RootMotion::FinalIK::AimController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C_METHOD_1_BFD24AEB375130CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F649D637F42AE66(::RootMotion::FinalIK::AimController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_B2D937401E7FDF1C_METHOD_1_4F649D637F42AE66_OFFSET))(this, a1);
	}
};
