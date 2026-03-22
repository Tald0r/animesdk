#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_8289F2785D9AA990;
class Class_2_208CC9941471731A_782;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D8AFB609207784AC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x65E3270)
#define CLASS_3_D8AFB609207784AC_METHOD_3_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x65E2F70)
#define CLASS_3_D8AFB609207784AC_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x65E3460)
#define CLASS_3_D8AFB609207784AC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x65E3670)
#define CLASS_3_D8AFB609207784AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65E3610)
#define CLASS_3_D8AFB609207784AC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x65E2E30)
#define CLASS_3_D8AFB609207784AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x65E32D0)
#define CLASS_3_D8AFB609207784AC__CTOR_OFFSET UNITYSDK_OFFSET(0x65E3350)

inline static constexpr unsigned int Class_3_D8AFB609207784AC_TypeDefinitionIndex = 61128;

class Class_3_D8AFB609207784AC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x3E; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_782*>*>* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8289F2785D9AA990*>* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_ONCLEAN_OFFSET))(this);
	}

	::System::Void Method_3_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_METHOD_3_11A5396029C33A57_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_D8AFB609207784AC* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_D8AFB609207784AC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8AFB609207784AC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
