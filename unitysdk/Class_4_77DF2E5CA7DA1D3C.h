#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_1_6F763FE7425E8072;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_77DF2E5CA7DA1D3C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7374FC0)
#define CLASS_4_77DF2E5CA7DA1D3C_METHOD_4_725DE75E7E1BEE17_OFFSET UNITYSDK_OFFSET(0x73752C0)
#define CLASS_4_77DF2E5CA7DA1D3C_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7375260)
#define CLASS_4_77DF2E5CA7DA1D3C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x73750A0)
#define CLASS_4_77DF2E5CA7DA1D3C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7375020)
#define CLASS_4_77DF2E5CA7DA1D3C__CTOR_OFFSET UNITYSDK_OFFSET(0x7375130)

inline static constexpr unsigned int Class_4_77DF2E5CA7DA1D3C_TypeDefinitionIndex = 40665;

class Class_4_77DF2E5CA7DA1D3C : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x11B; // 0x0
	::System::Collections::Generic::List_1<::Class_1_6F763FE7425E8072*>* Field_4_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_77DF2E5CA7DA1D3C* Method_4_725DE75E7E1BEE17()
	{
		return ((::Class_4_77DF2E5CA7DA1D3C*(*)())((::PBYTE)hIl2Cpp + CLASS_4_77DF2E5CA7DA1D3C_METHOD_4_725DE75E7E1BEE17_OFFSET))();
	}
};
