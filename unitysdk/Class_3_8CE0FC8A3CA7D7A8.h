#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1D144748B0C0612C_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8CE0FC8A3CA7D7A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC86FEF0)
#define CLASS_3_8CE0FC8A3CA7D7A8_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC86FE60)
#define CLASS_3_8CE0FC8A3CA7D7A8_METHOD_3_A6A1036570EACDDE_OFFSET UNITYSDK_OFFSET(0xC870040)
#define CLASS_3_8CE0FC8A3CA7D7A8__CTOR_OFFSET UNITYSDK_OFFSET(0xC86FFC0)

inline static constexpr unsigned int Class_3_8CE0FC8A3CA7D7A8_TypeDefinitionIndex = 38706;

class Class_3_8CE0FC8A3CA7D7A8 : public ::Class_2_1D144748B0C0612C_1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CE0FC8A3CA7D7A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CE0FC8A3CA7D7A8_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CE0FC8A3CA7D7A8_DISPOSE_OFFSET))(this);
	}

	static ::Class_3_8CE0FC8A3CA7D7A8* Method_3_A6A1036570EACDDE(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::Class_3_8CE0FC8A3CA7D7A8*(*)(::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_8CE0FC8A3CA7D7A8_METHOD_3_A6A1036570EACDDE_OFFSET))(a1, a2);
	}
};
