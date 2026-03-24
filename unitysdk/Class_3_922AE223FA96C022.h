#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_0_16E4307DCC419505_246;
class Class_3_922AE223FA96C022_Class_2_E5203603D6C0B9BB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_922AE223FA96C022_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xAF455C0)
#define CLASS_3_922AE223FA96C022_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0xAF457C0)
#define CLASS_3_922AE223FA96C022_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xAF45970)
#define CLASS_3_922AE223FA96C022_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xAF45530)
#define CLASS_3_922AE223FA96C022__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF45620)
#define CLASS_3_922AE223FA96C022__CTOR_OFFSET UNITYSDK_OFFSET(0xAF456A0)

inline static constexpr unsigned int Class_3_922AE223FA96C022_TypeDefinitionIndex = 48805;

class Class_3_922AE223FA96C022 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x47; // 0x0
	::Class_3_922AE223FA96C022_Class_2_E5203603D6C0B9BB* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_246*>* Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_922AE223FA96C022* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_922AE223FA96C022*(*)())((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_922AE223FA96C022_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
