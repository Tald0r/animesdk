#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"
#include "unitysdk/System/CodeDom/CodeTypeReferenceOptions.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeParameter; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_ARRAYELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18D65D60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_ARRAYRANK_OFFSET UNITYSDK_OFFSET(0x18D65DE0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x18D65E60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x18D65EE0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_TYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18D65F60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_ARRAYELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18D65DA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_ARRAYRANK_OFFSET UNITYSDK_OFFSET(0x18D65E20)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x18D65EA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x18D65F20)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D65B60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18D65BA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18D65BE0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18D65C20)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18D65C60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x18D65CA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18D65CE0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18D65D20)
#define SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D65B20)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeReference_TypeDefinitionIndex = 4047;

	class CodeTypeReference : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeParameter* typeParameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeParameter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_1_OFFSET))(this, typeParameter);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeTypeReference* arrayType, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_2_OFFSET))(this, arrayType, rank);
		}

		::System::Void _ctor_3(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_3_OFFSET))(this, typeName);
		}

		::System::Void _ctor_4(::System::String* typeName, ::System::CodeDom::CodeTypeReferenceOptions codeTypeReferenceOption)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeTypeReferenceOptions))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_4_OFFSET))(this, typeName, codeTypeReferenceOption);
		}

		::System::Void _ctor_5(::System::String* typeName, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>* typeArguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_5_OFFSET))(this, typeName, typeArguments);
		}

		::System::Void _ctor_6(::System::String* baseType, ::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_6_OFFSET))(this, baseType, rank);
		}

		::System::Void _ctor_7(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_7_OFFSET))(this, type);
		}

		::System::Void _ctor_8(::System::Type* type, ::System::CodeDom::CodeTypeReferenceOptions codeTypeReferenceOption)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::CodeDom::CodeTypeReferenceOptions))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE__CTOR_8_OFFSET))(this, type, codeTypeReferenceOption);
		}

		::System::CodeDom::CodeTypeReference* get_ArrayElementType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_ARRAYELEMENTTYPE_OFFSET))(this);
		}

		::System::Void set_ArrayElementType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_ARRAYELEMENTTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_ArrayRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_ARRAYRANK_OFFSET))(this);
		}

		::System::Void set_ArrayRank(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_ARRAYRANK_OFFSET))(this, value);
		}

		::System::String* get_BaseType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_BASETYPE_OFFSET))(this);
		}

		::System::Void set_BaseType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_BASETYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReferenceOptions get_Options()
		{
			return ((::System::CodeDom::CodeTypeReferenceOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::System::CodeDom::CodeTypeReferenceOptions value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReferenceOptions))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_TypeArguments()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCE_GET_TYPEARGUMENTS_OFFSET))(this);
		}
	};
}
