#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_224C5656E48B25DB.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D2154AC147D4ED66_METHOD_3_5C292C2CABBFA99E_OFFSET UNITYSDK_OFFSET(0x85E32A0)
#define CLASS_3_D2154AC147D4ED66_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x85E3350)
#define CLASS_3_D2154AC147D4ED66_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x85E3360)
#define CLASS_3_D2154AC147D4ED66__CTOR_OFFSET UNITYSDK_OFFSET(0x85E3260)

inline static constexpr unsigned int Class_3_D2154AC147D4ED66_TypeDefinitionIndex = 64947;

class Class_3_D2154AC147D4ED66 : public ::Class_2_224C5656E48B25DB
{
public:
	::System::String* Field_3_1; // 0x38
	::System::Int32 Field_3_2; // 0x40
	::System::Double Field_3_0; // 0x48

	::System::Void _ctor(::System::String* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_5C292C2CABBFA99E(::System::Func_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_5C292C2CABBFA99E_OFFSET))(this, a1);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2154AC147D4ED66_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}
};
