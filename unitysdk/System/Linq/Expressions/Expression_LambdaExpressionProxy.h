#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1B4AA330)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x1B4AA350)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1B4AA370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B4AA390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1B4AA3D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B4AA3E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1B4AA420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_TAILCALL_OFFSET UNITYSDK_OFFSET(0x1B4AA440)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B4AA480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AA2C0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_LambdaExpressionProxy_TypeDefinitionIndex = 4413;

	class Expression_LambdaExpressionProxy : public ::System::Object
	{
	public:
		::System::Linq::Expressions::LambdaExpression* _node; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::LambdaExpression* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY__CTOR_OFFSET))(this, node);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_BODY_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_CANREDUCE_OFFSET))(this);
		}

		::System::String* get_DebugView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_DEBUGVIEW_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_NAME_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_NODETYPE_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* get_Parameters()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Boolean get_TailCall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_TAILCALL_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDAEXPRESSIONPROXY_GET_TYPE_OFFSET))(this);
		}
	};
}
