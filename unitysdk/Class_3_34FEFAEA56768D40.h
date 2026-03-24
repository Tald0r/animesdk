#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define CLASS_3_34FEFAEA56768D40_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9A43E50)
#define CLASS_3_34FEFAEA56768D40_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9A43FD0)
#define CLASS_3_34FEFAEA56768D40_METHOD_3_EBB196BDA3A8423F_OFFSET UNITYSDK_OFFSET(0x9A44030)
#define CLASS_3_34FEFAEA56768D40_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9A43D70)
#define CLASS_3_34FEFAEA56768D40__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A43EB0)
#define CLASS_3_34FEFAEA56768D40__CTOR_OFFSET UNITYSDK_OFFSET(0x9A43F30)

inline static constexpr unsigned int Class_3_34FEFAEA56768D40_TypeDefinitionIndex = 60612;

class Class_3_34FEFAEA56768D40 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x36; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_1; // 0x48
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_0; // 0x50
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_3_3; // 0x58
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_2; // 0x60
	::System::Single Field_3_6; // 0x68
	::System::Single Field_3_4; // 0x6C
	::System::Single Field_3_5; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_34FEFAEA56768D40* Method_3_EBB196BDA3A8423F()
	{
		return ((::Class_3_34FEFAEA56768D40*(*)())((::PBYTE)hIl2Cpp + CLASS_3_34FEFAEA56768D40_METHOD_3_EBB196BDA3A8423F_OFFSET))();
	}
};
